#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	srand((unsigned int)time(NULL));
	struct Teacher t[3];
	int len = sizeof(t) / sizeof(t[0]);
	InitStruct(t, len);
	PrintStruct(t, len);
	return 0;
}