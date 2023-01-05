#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	float a = 2;
	float b = 1;
	int i = 0;
	float sum = 0;
	for (i = 1; i <= 19; i++)
	{
		float temp = a;
		a = a + b;
		b = temp;
		sum += a / b;
	}
	printf("Sum is %f\n", sum + 2);
	return 0;
}