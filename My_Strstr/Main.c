#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	const char* str1 = "abbbcdefghi";
	const char* str2 = "def";
	char* ret = MyStrstr(str1, str2);
	if (ret == NULL)
	{
		printf("Substring is not finded!\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}