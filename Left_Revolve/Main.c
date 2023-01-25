#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	char str1[30] = "abcdef";
	char str2[] = "cdefbba";
	int ret = Is_Left_Revolve(str1, str2);
	if (ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}