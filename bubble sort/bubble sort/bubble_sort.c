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
//������дarr[]ֻ���﷨�ǣ������Ķ����ѣ�arr������������������������Ԫ�صĵ�ַ
{
	for (int k = 0; k < len; k++)
	{
		printf("%d\n", arr[k]);
	}
}/*
* �����ܽ᣺
* 1.��������ʱ-��int arr����={1,2,3,������}
* arr���������Զ�˥��Ϊ&arr��0����Ԫ�ص�ַ
* 2.���ú�����
*/

int main()
{
	int arr[] = { 1,5,6,2,7,2,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	loop(arr, len);
	printFunc(arr, len);
	return 0;
}