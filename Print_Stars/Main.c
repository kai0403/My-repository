#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 5; i++)
	{
		if (i == 0 || i == 4)
		{
			printf("****\n");
		}
		else
		{
			printf("*\n");
		}
	}
	return 0;
}