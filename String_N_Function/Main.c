#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	char str1[100] = "hello worldxxxx\0xxxxxxxxx";
	char str2[] = "A man into an army";
	printf("%s\n", strncat(str1, str2, 20));
	/*printf("%s\n", strncpy(str1, str2, 20));*/
	return 0;
}