#pragma once
//����ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 20  //���Ա�洢�ռ�ĳ�ʼ������
#define OK 1 //����OKΪ�ɹ�
#define ERROR 0 //����ERRORΪʧ��

typedef int Status;//Status��Ϊ�Ƿ�ɹ��ı�־����ֵOK����ERROR
typedef int ElemType;//��Ԫ�����Ͷ���Ϊint
//˳�������ݽṹ
typedef struct
{
	ElemType* elem;
	int length;
}SqList;

//����һ���յ����Ա�
Status InitList(SqList* L1);

//����Ԫ�ص�˳�����
Status InsertElem(SqList* L1, int i, ElemType e);

//ɾ��˳����е�Ԫ��
Status DeleteElem(SqList* L1, int i, ElemType* e);

//��ȡ˳����е�Ԫ��
Status GetElem(SqList* L1, int i, ElemType* e);

//��ӡ˳���������Ԫ��
void PrintList(SqList* L1);