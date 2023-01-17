#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int line = 0;
	printf("Please input the number of lines:\n");
	scanf("%d", &line);
	while (line % 2 == 0)
	{
		printf("Wrong number, input again!\n");
		scanf("%d", &line);
	}
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 1; i <= (line + 1) / 2; i++)
	{
		for (j = 0; j < (line + 1) / 2 - i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= (line - 1) / 2; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < line - 2 * i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}