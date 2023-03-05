#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
Status InitialSql(Sql* L)
{
	//为元素动态分配空间
	L->elem = (Elemtype*)malloc(sizeof(Elemtype) * MAXSIZE);
	//判断是否分配成功
	if (!L->elem)
	{
		exit(OVERFLOW);
	}
	//初始化元素个数为0
	L->length = 0;
	return OK;
}

void DestroySql(Sql* L)
{
	//判断线性表是否存在
	if (!L->elem)
	{
		free(L->elem);
	}
	printf("Destroy successfully!\n");
}

void ClearSql(Sql* L)
{
	//将元素个数置为0
	L->length = 0;
}

Status IsEmptySql(Sql* L)
{
	if (L->length == 0)
	{
		return 1;
	}
	return 0;
}

int GetElem(Sql* L, int i, Elemtype* e)
{
	//判断下标是否合理
	if (i < 1 || i > L->length)
	{
		return ERROR;
	}
	*e = L->elem[i - 1];
	return OK;
}

int FindElem(Sql* L, Elemtype e)
{
	//for循环遍历查找
	int i = 0;
	for (i = 0; i < L->length; i++)
	{
		if (e == L->elem[i])
		{
			return i + 1;
		}
	}
	return 0;
	
}

Status InsertElem(Sql* L, int i, Elemtype e)
{
	//判断插入位置是否合法
	if (i > L->length + 1 || i < 1)
	{
		return ERROR;
	}
	//判断顺序表是否满了
	if (L->length == MAXSIZE)
	{
		return OVERFLOW;
	}
	//以上均合法，开始后移元素
	int j = 0;
	for (j = L->length - 1; j >= i - 1; j--)
	{
		L->elem[j + 1] = L->elem[j];
	}
	//后移完毕，开始放置新元素
	L->elem[j + 1] = e;
	//长度加一，返回OK
	L->length++;
	return OK;
}