#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	char ch = '0';
	int sum_a = 0;
	int sum_b = 0;
	int sum_c = 0;
	while ((ch = getchar()) != '\n')
	{
		if (ch == 'a')
		{
			sum_a++;
		}
		if (ch == 'b')
		{
			sum_b++;
		}
		if (ch == 'c')
		{
			sum_c++;
		}
	}
	printf("%d %d %d\n", sum_a, sum_b, sum_c);
	return 0;
}