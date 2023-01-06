#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
Reverse_Output(int n)
{
	if (n == 1)
	{
		char ch = getchar();
		putchar(ch);
	}
	else
	{
		char c = getchar();
		Reverse_Output(n - 1);
		putchar(c);
	}
}