#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int input = 0;
	printf("Please input an integral number:\n");
	scanf("%d", &input);
	int ret = IsPrime(input);
	if (ret == 1)
	{
		printf("%d is a prime number\n", input);
	}
	else
	{
		printf("%d is not a prime number\n", input);
	}
	return 0;
}