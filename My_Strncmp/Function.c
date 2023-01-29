#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int MyStrncmp(const char* str1, const char* str2, int n)
{
	while (*str1 == *str2 && n)
	{
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
	{
		return 0;
	}
	else if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}