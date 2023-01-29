#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
char* MyStrstr(const char* str1, const char* str2)
{
	/*assert(str1 && str2);
	if (*str2 == '\0')
	{
		return (char)str1;
	}
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int j = 0;
	for (int i = 0; i < strlen(str1); i++)
	{
		for (j = 0; j < strlen(str2); j++)
		{
			if (*(str1 + i + j) != *(str2 + j))
			{
				break;
			}
		}
		if (j == strlen(str2))
		{
			return str1 + i;
		}
	}
	return NULL;*/
	assert(str1 && str2);
	char* p1 = str1;
	char* p2 = str2;
	char* temp = str1;
	while (*temp)
	{
		p1 = temp;
		p2 = str2;
		while (*p1 && *p2 && !(*p1 - *p2))
		{
			p1++;
			p2++;
		}
		if (!*p2)
		{
			return temp;
		}
		if (!*p1)
		{
			return NULL;
		}
		temp++;
	}
	return NULL;
}