#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("Please input three numbers:\n");
	scanf("%d%d%d", &a, &b, &c);
	int largest = (a > b ? a : b) > c ? (a > b ? a : b) : c;
	int smallest = (a < b ? a : b) < c ? (a < b ? a : b) : c;
	int middle = a + b + c - largest - smallest;
	printf("%d\n", smallest);
	printf("%d\n", middle);
	printf("%d\n", largest);
	return 0;
}