#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int Func(char* str1, char* str2)
{
	int count = 0;
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
			count++;
		}
	}
	return count;
}