#include<stdio.h>

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void loop(int arr[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

void printFunc(int arr[], int len)
//在这里写arr[]只是语法糖，方便阅读而已，arr叫做数组名，本质是数组首元素的地址
{
	for (int k = 0; k < len; k++)
	{
		printf("%d\n", arr[k]);
	}
}/*
* 本质总结：
* 1.定义数组时-》int arr【】={1,2,3,。。。}
* arr数组名会自动衰减为&arr【0】首元素地址
* 2.调用函数是
*/

int main()
{
	int arr[] = { 1,5,6,2,7,2,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	loop(arr, len);
	printFunc(arr, len);
	return 0;
}