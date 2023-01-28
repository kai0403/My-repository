#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int MyStrlen(char* str)
{
	assert(str != NULL);
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return MyStrlen(++str) + 1;
	}
}

void MyStrcpy(char* str1, char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1++ = *str2++)
	{
		;
	}
}

void MyStrcat(char* str1, char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str1++ = *str2++)
	{
		;
	}
}

int MyStrcmp(char* str1, char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (1)
	{
		if (*str1 > *str2)
		{
			return 1;
		}
		else if (*str1 < *str2)
		{
			return -1;
		}
		else
		{
			str1++;
			str2++;
		}
		if (*str1 == '\0' && *str2 != '\0')
		{
			return -1;
		}
		else if (*str1 != '\0' && *str2 == '\0')
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
	
}