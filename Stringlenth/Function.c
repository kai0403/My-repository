#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int MyStrlen(char* str)
{
	int lenth = 0;
	char* str1 = str;
	while (*str1 != '\0')
	{
		lenth++;
		str1++;
	}
	return lenth;
}