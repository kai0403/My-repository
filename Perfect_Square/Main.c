#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int m = 0;
	int n = 0;
	for (m = 2; m <= 84; m += 2)
	{
		n = 168 / m;
		if (168 % m == 0 && m > n && n % 2 == 0)
		{
			int num = (m - n) / 2;
			printf("%d\n", num * num - 100);
		}
	}
	return 0;
}