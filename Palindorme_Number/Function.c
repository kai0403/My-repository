#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
void IsPalindormeNumber(int n)
{
	int miri = n / 10000;
	int thou = (n % 10000) / 1000;
	int hund = (n % 1000) / 100;
	int ten = (n % 100) / 10;
	int bits = n % 10;
	if (miri == bits && thou == ten)
	{
		printf("%d is a palindorme number.\n", n);
	}
	else
	{
		printf("%d is not a palindorme number.\n", n);
	}
}