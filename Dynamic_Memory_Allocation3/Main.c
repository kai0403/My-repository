#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	/*int* p1 = (int*)malloc(sizeof(int) * 5);
	if (p1 == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p1 + i) = i;
			printf("%-4d", *(p1 + i));
		}
		printf("\n");
		int* p2 = (int*)realloc(p1, sizeof(int) * 10);
		if (p2 == NULL)
		{
			printf("%s\n", strerror(errno));
		}
		else
		{
			p1 = p2;
			for (i = 0; i < 10; i++)
			{
				*(p1 + i) = i;
				printf("%-4d", *(p1 + i));
			}
			free(p1);
			p1 = NULL;
		}
	}*/
	Test();
	return 0;
}