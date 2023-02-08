#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
char* GetMemory(void)
{
	char p[] = "hello world";
	return p;
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}

int* Func()
{
	int* p = (int*)malloc(100);
	return p;
}

void GetMemory2(char** p, int num)
{
	*p = (char*)malloc(num);
}

void Test2(void)
{
	char* str = NULL;
	GetMemory2(&str, 100);
	strcpy(str, "hello");
	printf(str);
	free(str);
	str = NULL;
}

void Test3(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	str = NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}