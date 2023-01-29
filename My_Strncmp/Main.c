#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	const char* str1 = "abcdef";
	const char* str2 = "bct";
	printf("%d\n", MyStrncmp(str1, str2, 2));
	return 0;
}