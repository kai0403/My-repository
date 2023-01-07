#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
void Delete(char str[])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
		{
			for (j = i; j < strlen(str); j++)
			{
				str[j] = str[j + 1];
			}
		}
	}
	printf("%s\n", str);
}