#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int i = 0;
	for (i = 10; i < 100; i++)
	{
		if (809 * i >= 1000 && 809 * i < 10000 && 8 * i < 100 && 9 * i >= 100)
		{
			printf("%d\n", i);
			printf("%d = 800 * %d + 9 * %d\n", i * 809, i, i);
		}
	}
	return 0;
}