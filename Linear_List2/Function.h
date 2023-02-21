#pragma once
//引入头文件
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 20  //线性表存储空间的初始分配量
#define OK 1 //定义OK为成功
#define ERROR 0 //定义ERROR为失败

typedef int Status;//Status作为是否成功的标志来赋值OK或者ERROR
typedef int ElemType;//将元素类型定义为int
//顺序表的数据结构
typedef struct
{
	ElemType* elem;
	int length;
}SqList;

//构造一个空的线性表
Status InitList(SqList* L1);

//插入元素到顺序表中
Status InsertElem(SqList* L1, int i, ElemType e);

//删除顺序表中的元素
Status DeleteElem(SqList* L1, int i, ElemType* e);

//获取顺序表中的元素
Status GetElem(SqList* L1, int i, ElemType* e);

//打印顺序表中所有元素
void PrintList(SqList* L1);