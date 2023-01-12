#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int i = 0;
	int j = 0;
	int arr[7] = { 0 };
	for (i = 0; i < 7; i++)
	{
		printf("Please input an integral number from one to fifty:\n");
		scanf("%d", &arr[i]);
		for (j = 0; j < arr[i]; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}