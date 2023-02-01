#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
void Swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}