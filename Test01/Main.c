#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	Sql L;
	InitialSql(&L);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		L.elem[i] = i;
		L.length++;
	}
	/*ClearSql(&L);*/
	/*for (i = 0; i < 10; i++)
	{
		printf("%-4d", L.elem[i]);
	}*/
	/*DestroySql(&L);*/
	/*int ret = IsEmptySql(&L);
	if (ret == 1)
	{
		printf("The sequence list is empty!\n");
	}
	else
	{
		printf("The sequence list is not empty!\n");
	}*/
	/*Elemtype e = 0;
	int ret = GetElem(&L, 5, &e);
	if (ret == 0)
	{
		printf("Input error!\n");
	}
	else
	{
		printf("The finded number is %d\n", e);
	}*/
	/*int ret = FindElem(&L, 5);
	if (ret != 0)
	{
		printf("The finded number's index is %d\n", ret);
	}
	else
	{
		printf("The number is not finded!\n");
	}*/
	int ret = InsertElem(&L, 5, 99);
	if (ret == 0)
	{
		printf("Index error!\n");
	}
	else if (ret == -2)
	{
		printf("The sequence list is full!\n");
	}
	else
	{
		printf("Insert successfully!\n");
	}
	for (i = 0; i < 11; i++)
	{
		printf("%-4d", L.elem[i]);
	}
	printf("\n");
	printf("Length is %d\n", L.length);
	return 0;
}