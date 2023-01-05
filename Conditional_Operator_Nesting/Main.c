#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int score = 0;
	printf("Please input a score:\n");
	scanf("%d", &score);
	char ret = Judge(score);
	printf("The grade is %c\n", ret);
	return 0;
}