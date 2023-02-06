#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	/*int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%-4d", *(p + i));
		}
	}
	free(p);
	p = NULL;*/
	int* p = (int*)malloc(sizeof(int) * 5);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int* p2 = (int*)realloc(p, sizeof(int) * 10);
		if (p2 == NULL)
		{
			printf("%s\n", strerror(errno));
		}
		else
		{
			p = p2;
			int i = 0;
			for (i = 0; i < 10; i++)
			{
				*(p + i) = i;
				printf("%d\n", *(p + i));
			}
		}
	}
	free(p);
	p = NULL;
	return 0;
}