#pragma once
#include <stdio.h>
#include <stdlib.h>
//Ԥ���峣��������
//�������״̬����
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define INFEASIBLE -1
#define OVERFLOW -2
//Ԥ�����������
#define MAXSIZE 100
typedef int Status;
typedef int Elemtype;
//����˳�������
typedef struct 
{
	Elemtype* elem;
	int length;
}Sql;
//���Ա��ʼ��
Status InitialSql(Sql* L);
//����˳���
void DestroySql(Sql* L);
//������Ա�
void ClearSql(Sql* L);
//�ж����Ա��Ƿ�Ϊ��
Status IsEmptySql(Sql* L);
//���Ա�ȡֵ
int GetElem(Sql* L, int i, Elemtype* e);
//��ֵ����
int FindElem(Sql* L, Elemtype e);
//����Ԫ��
Status InsertElem(Sql* L, int i, Elemtype e);