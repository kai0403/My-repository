#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int i = 0;
	int ret = 0;
	printf("2\n");
	for (i = 3; i < 100; i += 2)
	{
		ret = IsPrime(i);
		if (ret == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}