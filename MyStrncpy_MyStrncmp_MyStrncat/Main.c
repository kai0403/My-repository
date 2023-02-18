#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	char str1[100] = "You can be anyone you wanna be";
	char* str2 = "A man into an army";
	/*char* ret = MyStrncpy(str1, str2, 10);
	printf("%s\n", ret);*/
	/*char* ret2 = strncpy(str1, str2, 10);
	printf("%s\n", ret2);*/
	/*int ret = strncmp(str1, str2, 40);
	printf("%d\n", ret);*/
	/*int ret = MyStrncmp(str1, str2, 12);
	printf("%d\n", ret);*/
	/*char* ret = MyStrncat(str1, str2, 10);
	printf("%s\n", ret);*/
	char* ret = MyStrncat(str1, str2, 20, 100);
	printf("%s\n", ret);
	return 0;
}