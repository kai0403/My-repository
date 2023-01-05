#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int sum = 1;
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		sum = (sum + 1) * 2;
	}
	printf("Sum is %d\n", sum);
	return 0;
}