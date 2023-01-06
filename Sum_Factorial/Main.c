#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int i = 0;
	int sum = 0;
	int ret = 0;
	for (i = 1; i <= 5; i++)
	{
		ret = Factorial(i);
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}