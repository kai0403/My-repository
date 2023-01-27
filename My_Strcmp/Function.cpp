#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int MyStrcmp(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else if(*str1 > *str2)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	if (len1 == len2)
	{
		return 0;
	}
	else if(len1 < len2)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}