#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
Status InitialSql(Sql* L)
{
	//ΪԪ�ض�̬����ռ�
	L->elem = (Elemtype*)malloc(sizeof(Elemtype) * MAXSIZE);
	//�ж��Ƿ����ɹ�
	if (!L->elem)
	{
		exit(OVERFLOW);
	}
	//��ʼ��Ԫ�ظ���Ϊ0
	L->length = 0;
	return OK;
}

void DestroySql(Sql* L)
{
	//�ж����Ա��Ƿ����
	if (!L->elem)
	{
		free(L->elem);
	}
	printf("Destroy successfully!\n");
}

void ClearSql(Sql* L)
{
	//��Ԫ�ظ�����Ϊ0
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
	//�ж��±��Ƿ����
	if (i < 1 || i > L->length)
	{
		return ERROR;
	}
	*e = L->elem[i - 1];
	return OK;
}

int FindElem(Sql* L, Elemtype e)
{
	//forѭ����������
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
	//�жϲ���λ���Ƿ�Ϸ�
	if (i > L->length + 1 || i < 1)
	{
		return ERROR;
	}
	//�ж�˳����Ƿ�����
	if (L->length == MAXSIZE)
	{
		return OVERFLOW;
	}
	//���Ͼ��Ϸ�����ʼ����Ԫ��
	int j = 0;
	for (j = L->length - 1; j >= i - 1; j--)
	{
		L->elem[j + 1] = L->elem[j];
	}
	//������ϣ���ʼ������Ԫ��
	L->elem[j + 1] = e;
	//���ȼ�һ������OK
	L->length++;
	return OK;
}