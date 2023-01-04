#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int Calculate(int n)
{
	int a = 1;
	int b = 1;
	int i = 0;
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		for (i = 0; i < n / 2; i++)
		{
			a = a + b;
			b = a + b;
		}
		if (n % 2 == 0)
		{
			return b;
		}
		else
		{
			return a;
		}
	}
}