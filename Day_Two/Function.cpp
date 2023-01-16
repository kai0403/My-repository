#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int Sum(int a, int b)
{
	return a + b;
}

int Sub(int a, int b)
{
	if (a > b)
	{
		return a - b;
	}
	else
	{
		return b - a;
	}
}

int Mul(int a, int b)
{
	return a * b;
}

int Div(int a, int b)
{
	if (a > b)
	{
		return a / b;
	}
	else
	{
		return b / a;
	}
}

int Mold(int a, int b)
{
	if (a > b)
	{
		return a % b;
	}
	else
	{
		return b % a;
	}
}