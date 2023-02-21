#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
//构造一个空的顺序表
Status InitList(SqList* L1)
{
	L1->elem = (ElemType*)malloc(sizeof(SqList) * MAXSIZE);//分配最大个数的数据内存空间给elem
	//判断是否分配成功
	if (!L1->elem)
	{
		return ERROR;
	}
	//将长度初始化为0
	L1->length = 0;
	return OK;
}
/*插入操作：
前提条件：顺序表已经存在
具体步骤：
1.寻找对应物理下标
2.判断i是否在合法范围内
3.若插入位置不在表尾,从最后一个元素开始依次向后移，直到第i个元素移完, 插入对应元素， 长度加一
*/
Status InsertElem(SqList* L1, int i, ElemType e)//插入元素
{
	//判断顺序表是否满了
	if (L1->length >= MAXSIZE)
	{
		return ERROR;
	}
	//判断i是否在合法范围内
	if (i < 1 || i > L1->length + 1)//插入元素可以是length后面一个
	{
		return ERROR;
	}
	//若插入位置不在表尾,从最后一个元素开始依次向后移，直到第i个元素移完
	if (i <= L1->length)
	{
		int j = 0;
		for (j = L1->length - 1; j >= i - 1; j--)
		{
			L1->elem[j + 1] = L1->elem[j];
		}
	}
	//将e赋值给第i个元素
	L1->elem[i - 1] = e;
	//长度加一
	L1->length++;
	return OK;
}

/*删除操作：
前提条件：顺序表已经存在
具体步骤：
1.判断顺序表是否为空
2.判断i是否在合法范围内
3.若删除位置不在表尾,从最后一个元素开始依次向前移，直到第i个元素移完，长度减一
*/
Status DeleteElem(SqList* L1, int i, ElemType* e)//删除元素
{
	//判断顺序表是否为空
	if (L1->length == 0)
	{
		return ERROR;
	}
	//判断i是否在合法范围内
	if (i < 1 || i > L1->length)
	{
		return ERROR;
	}
	//将被删除元素的值赋给*e
	*e = L1->elem[i - 1];
	//若删除位置不在表尾,从后面一个元素开始依次向前移，直到第i个元素移完
	if (i < L1->length)
	{

		int j = 0;
		for (j = i - 1; j < L1->length - 1; j++)
		{
			L1->elem[j] = L1->elem[j + 1];
		}
	}
	//长度减一
	L1->length--;
	return OK;
}

/*获取元素操作：
前提条件：顺序表已经存在
具体步骤：
1.判断顺序表是否为空
2.判断i是否在合法范围内
3.将对应元素赋值给*e
*/
Status GetElem(SqList* L1, int i, ElemType* e)//获取元素
{
	//判断顺序表是否为空
	if (L1->length == 0)
	{
		return ERROR;
	}
	//判断i是否在合法范围内
	if (i < 1 || i > L1->length)
	{
		return ERROR;
	}
	//将对应元素赋值给*e
	*e = L1->elem[i - 1];
	return OK;
}

//打印顺序表中所有元素
void PrintList(SqList* L1)//打印所有元素
{
	//判断顺序表是否为空
	if (L1->length == 0)
	{
		printf("The list is empty!\n");
		return;
	}
	//遍历打印所有元素
	int i = 0;
	for (i = 0; i < L1->length; i++)
	{
		printf("%-4d", L1->elem[i]);
	}
	printf("\n");
}