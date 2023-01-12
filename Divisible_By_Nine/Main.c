#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int input = 0;
	do
	{
		printf("Please input a prime number:\n");
		scanf("%d", &input);
	} while (IsPrime(input) == 0);
	int initial = 9;
	int num = 9;
	int count = 1;
	while (num % input != 0)
	{
		num = num * 10 + initial;
		count++;
	}
	printf("%d能被%d个9整除\n", input, count);
	return 0;
}