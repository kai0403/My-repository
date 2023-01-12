#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int i = 0;
	for (i = 1; i <= 8; i++)
	{
		if (i == 1)
		{
			printf("%d位数的个数为%d\n",i, 4);
			continue;
		}
		printf("%d位数的个数为%d\n", i, 7 * 4 * (int)pow(8, i - 2));
	}
	return 0;
}