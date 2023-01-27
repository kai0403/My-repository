#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int Is_All_Null(int arr[], int n, int i)
{
	for (int j = i; j < n; j++)
	{
		if (arr[j] != 0)
		{
			return 0;
		}
	}
	return 1;
}