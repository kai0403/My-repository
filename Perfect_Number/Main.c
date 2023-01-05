#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 2; i < 1000; i++)
	{
		sum = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}