#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j || i + j == 2)
			{
				sum += arr[i][j];
			}
		}
	}
	printf("%d\n", sum);
	return 0;
}