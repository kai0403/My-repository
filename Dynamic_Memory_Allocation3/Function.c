#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
char* GetMemory()
{
	char* p = (char*)malloc(100);
	return p;
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	assert(str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}