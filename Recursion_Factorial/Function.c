#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int Factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return Factorial(n - 1) * n;
	}
}