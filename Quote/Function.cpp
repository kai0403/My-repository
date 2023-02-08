#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
void Swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

int& Func()
{
	int a = 10;
	return a;
}

int& Func2()
{
	static int a = 10;
	return a;
}

void ShowValue(const int& n)
{
	cout << n << endl;
}

int Add(int x, int y, int z)
{
	return x + y + z;
}