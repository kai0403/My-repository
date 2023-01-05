#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
float SumDistance(int n)
{
	float sum = 0;
	int i = 0;
	float h = 100;
	if (n == 1)
	{
		return 100;
	}
	else
	{
		for (i = 0; i <= n - 2; i++)
		{
			h = 100 * pow(0.5, i);
			sum += h;
		}
		return sum + 100;
	}
	
}