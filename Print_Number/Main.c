#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int count = 0;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			for (k = 1; k <= 4; k++)
			{
				if (i != j && i != k && j != k)
				{
					count++;
					printf("%d\n", i * 100 + j * 10 + k);
				}
			}
		}
	}
	printf("%d\n", count);
	return 0;
}