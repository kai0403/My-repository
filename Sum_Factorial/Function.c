#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int Factorial(int n)
{
	int fac = 1;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		fac *= i;
	}
	return fac;
}