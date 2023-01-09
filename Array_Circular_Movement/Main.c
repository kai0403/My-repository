#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int i = 0;
	int arr[12] = { 1,2,3,4,5,6,7,8,9 };
	for (i = 8; i >= 0; i--)
	{
		arr[i + 3] = arr[i];
	}
	for (i = 0; i < 3; i++)
	{
		arr[i] = arr[11 - i];
	}
	for (i = 0; i < 9; i++)
	{
		printf("%-4d", arr[i]);
	}
	return 0;
}