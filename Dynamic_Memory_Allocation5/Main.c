#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	//printf("%zd\n", sizeof(struct S));
	//struct S* ps = (struct S*)malloc(sizeof(struct S) + sizeof(int) * 5);
	//assert(ps);
	///*ps->n = 100;
	//int i = 0;
	//for (i = 0; i < 5; i++)
	//{
	//	ps->arr[i] = i;
	//}
	//for (i = 0; i < 5; i++)
	//{
	//	printf("%-4d", ps->arr[i]);
	//}*/
	//struct S* ps2 = realloc(ps, 44);
	//if (ps2 != NULL)
	//{
	//	ps = ps2;
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		ps->arr[i] = i;
	//	}
	//	for (i = 0; i < 10; i++)
	//	{
	//		printf("%-4d", ps->arr[i]);
	//	}
	//}
	//free(ps);
	//ps = NULL;
	struct S2* ps2 = (struct S2*)malloc(sizeof(struct S2));
	assert(ps2);
	ps2->parr = (int*)malloc(sizeof(int) * 5);
	assert(ps2->parr);
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps2->parr[i] = i;
		printf("%-4d", ps2->parr[i]);
	}
	printf("\n");
	int* parr2 = (int*)realloc(ps2->parr, sizeof(int) * 10);
	assert(parr2);
	ps2->parr = parr2;
	for (i = 5; i < 10; i++)
	{
		*(ps2->parr + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%-4d", *(ps2->parr + i));
	}
	free(ps2->parr);
	ps2->parr = NULL;
	printf("\n%zd\n", sizeof(struct S2));
	free(ps2);
	ps2 = NULL;
	return 0;
}