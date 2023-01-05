#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
void Resolve(int num)
{
	int i = 0;
	while (num % 2 == 0)
	{
		printf("2 ");
		num /= 2;
	}
	for (i = 3; i <= num; i += 2)
	{
		while (num % i == 0)
		{
			printf("%d ", i);
			num /= i;
		}
		if (num == 1)
		{
			break;
		}
	}
}