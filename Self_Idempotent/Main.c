#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int i = 0;
	int temp = 0;
	for (i = 0; i <= 100000; i++)
	{
		int n = 1;
		int sum = 0;
		temp = i;
		while (temp /= 10)//ÅÐ¶ÏiµÄÎ»Êý
		{
			n++;
		}
		temp = i;
		while (temp)
		{
			sum += pow(temp % 10, n);
			temp /= 10;
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
		/*if (IsIdempotent(i) == 1)
		{
			printf("%d\n", i);
		}*/
	}
	return 0;
}