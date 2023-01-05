#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int n1 = 0;
	int n2 = 0;
	printf("Please input two integral numbers:\n");
	scanf("%d%d", &n1, &n2);
	int div = CommonDivisor(n1, n2);
	int mul = CommonMultiple(n1, n2, div);
	printf("The common divisor is %d\n", div);
	printf("The common multiple is %d\n", mul);
	return 0;
}