#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int i = 0;
	int judge = 0;
	for (i = 101; i <= 200; i++)
	{
		judge = IsPrime(i);
		if (judge == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}