#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	char str1[30] = "You can be";
	char str2[30] = " anyone you wanna be";
	char* str = (char*)malloc(strlen(str1) + strlen(str2) + 1);
	strcpy(str, str1);
	strcat(str, str2);
	puts(str);
	str = NULL;
	free(str);
	return 0;
}