#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	char str[] = "Stay focused, stay calm";
	char str1[] = "You can be anyone you wanna be";
	/*printf("%s\n", strcpy(str1, str));*/
	MyStrcpy(str1, str);
	printf("%s\n", str1);
	return 0;
}