#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int n = 0;
	printf("Please input an integral number:\n");
	scanf("%d", &n);
	float ret = 0;
	if (n % 2 == 0)
	{
		ret = Even_Sum(n);
	}
	else
	{
		ret = Odd_Sum(n);
	}
	printf("The result is %f\n", ret);
	return 0;
}