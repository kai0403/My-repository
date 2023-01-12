#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int input = 0;
	int i = 0;
	int j = 0;
	do
	{
		printf("Please input an even number:\n");
		scanf("%d", &input);
	} while (input % 2 != 0 || input == 2);//输入一个大于2的偶数
	for (i = 2; i < input; i++)
	{
		for (j = 2; j < input; j++)
		{
			if (IsPrime(i) == 1 && IsPrime(j) == 1 && i >= j && i + j == input)
			{
				printf("%d + %d = %d\n", i, j, i + j);
			}
		}
	}
	return 0;
}