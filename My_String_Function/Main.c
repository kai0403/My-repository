#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	char str1[100] = "You can be anyone you wanna be";
	char str2[] = "Stay focused, stay calm";
	printf("%d, %d, %d\n", MyStrcmp(str1, str2), MyStrcmp(str1, str1), MyStrcmp(str2, str1));
	return 0;
}