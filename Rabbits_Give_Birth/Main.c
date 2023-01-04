#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int month = 0;
	printf("Please input the month:\n");
	scanf("%d", &month);
	int ret = Calculate(month);
	printf("%d\n", ret);
	return 0;
}