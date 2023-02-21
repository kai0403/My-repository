#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	printf("Construct an empty linear list:\n");
	SqList L;
	//创建一个空顺序表
	InitList(&L);
	//插入十个数
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		InsertElem(&L, i + 1, i);
	}
	/*InsertElem(&L, 4, 10);
	PrintList(&L);*/
	/*DeleteElem(&L, 4, &e);
	printf("%d\n", e);
	PrintList(&L);*/
	/*ElemType e = 0;
	DeleteElem(&L, 6, &e);
	PrintList(&L);*/
	ElemType e = 0;
	GetElem(&L, 8, &e);
	printf("%d\n", e);
	return 0;
}