#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"

void Swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void Move(int arr[], int n)
{
	int left = 0;
	int right = n - 1;
	while (left < right)
	{
		if (arr[left] % 2 == 0 && arr[right] % 2 != 0)
		{
			Swap(&arr[left], &arr[right]);
		}
		else if (arr[left] % 2 == 0 && arr[right] % 2 == 0)
		{
			right--;
		}
		else if (arr[left] % 2 != 0 && arr[right] != 0)
		{
			left++;
		}
	}
}

void Print(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%-4d", arr[i]);
	}
}

