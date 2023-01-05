#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int CommonDivisor(int x, int y)
{
	int rem = 1;
	if (x > y)
	{
		while (rem != 0)
		{
			rem = x % y;
			x = y;
			y = rem;
		}
		return x;
	}
	else
	{
		while (rem != 0)
		{
			rem = y % x;
			y = x;
			x = rem;
		}
		return y;
	}
}

int CommonMultiple(int x, int y, int z)
{
	return x * y / z;
}