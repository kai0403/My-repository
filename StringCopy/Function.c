#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
void MyStrcpy(char* str1, char* str2)
{
	/*char* str3 = str1;
	char* str4 = str2;*/
	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
}