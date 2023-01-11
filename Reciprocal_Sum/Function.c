#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
float Odd_Sum(int n)
{
	float i = 0;
	float sum = 0;
	for (i = 1; i <= n; i += 2)
	{
		sum += 1 / i;
	}
	return sum;
}

float Even_Sum(int n)
{
	float i = 0;
	float sum = 0;
	for (i = 2; i <= n; i += 2)
	{
		sum += 1 / i;
	}
	return sum;
}