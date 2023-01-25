#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	int input = 0;
	int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int x = 3;
	int y = 3;
	printf("Please input a number:\n");
	scanf("%d", &input);
	int ret = Judge(arr, input, &x, &y);
	if (ret == 1)
	{
		printf("The number is found\n");
		printf("The coordinate of the number is (%d, %d)\n", x, y);
	}
	else
	{
		printf("The number is not found\n");
	}
	return 0;
}