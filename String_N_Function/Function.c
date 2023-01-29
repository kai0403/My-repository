#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
char* MyStrncat(char* str1, const char* str2, int n)
{
	assert(str1 && str2);
	char* str = str1;
	while (*str1 != '\0')
	{
		str1++;
	}
	while (n && (*str1++ = *str2++))
	{
		n--;
	}
	*str1 = '\0';
	return str;
}

char* MyStrncpy(char* str1, const char* str2, int n)
{
	assert(str1 && str2);
	char* p1 = str1;
	//char* p2 = str2;
	while (n && (*str1++ = *str2++))
	{
		n--;
	}
	/*if (n > strlen(p2))
	{
		for (int i = 0; i < n - strlen(p2); i++)
		{
			str1 = '\0';
			str1++;
		}
	}*/
	return p1;
}