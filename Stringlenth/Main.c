#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int lenth = 0;
	char* str = "A man into an army";
	lenth = MyStrlen(str);
	printf("Lenth is %d\n", lenth);
	return 0;
}