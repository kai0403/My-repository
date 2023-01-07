#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int input = 0;
	printf("Please input a five-digit number:\n");
	scanf("%d", &input);
	IsPalindormeNumber(input);
	return 0;
}