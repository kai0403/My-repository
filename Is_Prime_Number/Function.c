#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int IsPrime(int n)
{
	int i = 0;
	for (i = 2; i <= n - 1; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}