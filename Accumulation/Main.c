#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int n = 0;
	printf("Please input an integral number:\n");
	scanf("%d", &n);
	int a0 = 2;
	int a = a0;
	int i = 0;
	int sum = 0;
	for (i = 2; i <= n; i++)
	{
		a = 10 * a + a0;
		sum += a;
	}
	printf("The result is %d\n", sum + a0);
	return 0;
}