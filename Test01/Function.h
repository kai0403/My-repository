#pragma once
#include <stdio.h>
#include <stdlib.h>
//预定义常量和类型
//函数结果状态代码
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define INFEASIBLE -1
#define OVERFLOW -2
//预定义最大容量
#define MAXSIZE 100
typedef int Status;
typedef int Elemtype;
//设置顺序表内容
typedef struct 
{
	Elemtype* elem;
	int length;
}Sql;
//线性表初始化
Status InitialSql(Sql* L);
//销毁顺序表
void DestroySql(Sql* L);
//清空线性表
void ClearSql(Sql* L);
//判断线性表是否为空
Status IsEmptySql(Sql* L);
//线性表取值
int GetElem(Sql* L, int i, Elemtype* e);
//按值查找
int FindElem(Sql* L, Elemtype e);
//插入元素
Status InsertElem(Sql* L, int i, Elemtype e);