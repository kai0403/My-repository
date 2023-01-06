#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int Recursion_Output_Ages(int n)
{
	if (n == 1)
	{
		return 10;
	}
	else
	{
		return Recursion_Output_Ages(n - 1) + 2;
	}
}