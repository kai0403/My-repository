#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	struct Hero h[4] = { 0 };
	int len = sizeof(h) / sizeof(h[0]);
	Init(h);
	BubbleSort(h, len);
	Print(h, len);
	return 0;
}