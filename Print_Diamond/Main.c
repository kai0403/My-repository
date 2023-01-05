#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 1; i <= 4; i++)
	{
		for (k = 4 - i; k > 0; k--)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= 4; i++)
	{
		for (j = 0; j < i - 1; j++)
		{
			printf(" ");
		}
		for (k = 9 - 2 * i; k > 0; k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}