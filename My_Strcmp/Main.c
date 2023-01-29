#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	char str1[] = "zbcdef";
	char str2[] = "abcdef";
	int ret = MyStrcmp(str1, str2);
	printf("Result is %d\n", ret);
	return 0;
}