#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int a = 2;
	int a1 = a;
	int i = 0;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum += a1;
		a1 = a1 * 10 + a;
	}
	printf("%d\n", sum);
	return 0;
}