#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
void Reverse(char* str)
{
	int i = 0;
	char* str1 = str;
	for (i = 0; i < strlen(str) / 2; i++)
	{
		char temp = *(str1 + i);
		*(str1 + i) = *(str1 + strlen(str) - 1 - i);
		*(str1 + strlen(str) - 1 - i) = temp;
	}
}