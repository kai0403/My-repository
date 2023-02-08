#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int* Function()
{
	int a = 10;
	return &a;
}

int* Function2()
{
	int* p = new int[10];
	return p;
}