#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int i = 0;
	int arr[] = { 2,4,6,8,10,1,3,5,7,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	int max = arr[0];
	int min = arr[0];
	int max0 = 0;
	int min0 = 0;
	for (i = 1; i < sz; i++)
	{
		if (*(p + i) > max)
		{
			max = *(p + i);
		}
	}
	for (i = 1; i < sz; i++)
	{
		if (*(p + i) < min)
		{
			min = *(p + i);
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (max == *(p + i))
		{
			max0 = i;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (min == *(p + i))
		{
			min0 = i;
		}
	}
	Swap(p + max0, p);
	Swap(p + min0, p + sz - 1);
	for (i = 0; i < sz; i++)
	{
		printf("%-4d", *(p + i));
	}
	return 0;
}