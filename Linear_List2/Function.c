#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
//����һ���յ�˳���
Status InitList(SqList* L1)
{
	L1->elem = (ElemType*)malloc(sizeof(SqList) * MAXSIZE);//�����������������ڴ�ռ��elem
	//�ж��Ƿ����ɹ�
	if (!L1->elem)
	{
		return ERROR;
	}
	//�����ȳ�ʼ��Ϊ0
	L1->length = 0;
	return OK;
}
/*���������
ǰ��������˳����Ѿ�����
���岽�裺
1.Ѱ�Ҷ�Ӧ�����±�
2.�ж�i�Ƿ��ںϷ���Χ��
3.������λ�ò��ڱ�β,�����һ��Ԫ�ؿ�ʼ��������ƣ�ֱ����i��Ԫ������, �����ӦԪ�أ� ���ȼ�һ
*/
Status InsertElem(SqList* L1, int i, ElemType e)//����Ԫ��
{
	//�ж�˳����Ƿ�����
	if (L1->length >= MAXSIZE)
	{
		return ERROR;
	}
	//�ж�i�Ƿ��ںϷ���Χ��
	if (i < 1 || i > L1->length + 1)//����Ԫ�ؿ�����length����һ��
	{
		return ERROR;
	}
	//������λ�ò��ڱ�β,�����һ��Ԫ�ؿ�ʼ��������ƣ�ֱ����i��Ԫ������
	if (i <= L1->length)
	{
		int j = 0;
		for (j = L1->length - 1; j >= i - 1; j--)
		{
			L1->elem[j + 1] = L1->elem[j];
		}
	}
	//��e��ֵ����i��Ԫ��
	L1->elem[i - 1] = e;
	//���ȼ�һ
	L1->length++;
	return OK;
}

/*ɾ��������
ǰ��������˳����Ѿ�����
���岽�裺
1.�ж�˳����Ƿ�Ϊ��
2.�ж�i�Ƿ��ںϷ���Χ��
3.��ɾ��λ�ò��ڱ�β,�����һ��Ԫ�ؿ�ʼ������ǰ�ƣ�ֱ����i��Ԫ�����꣬���ȼ�һ
*/
Status DeleteElem(SqList* L1, int i, ElemType* e)//ɾ��Ԫ��
{
	//�ж�˳����Ƿ�Ϊ��
	if (L1->length == 0)
	{
		return ERROR;
	}
	//�ж�i�Ƿ��ںϷ���Χ��
	if (i < 1 || i > L1->length)
	{
		return ERROR;
	}
	//����ɾ��Ԫ�ص�ֵ����*e
	*e = L1->elem[i - 1];
	//��ɾ��λ�ò��ڱ�β,�Ӻ���һ��Ԫ�ؿ�ʼ������ǰ�ƣ�ֱ����i��Ԫ������
	if (i < L1->length)
	{

		int j = 0;
		for (j = i - 1; j < L1->length - 1; j++)
		{
			L1->elem[j] = L1->elem[j + 1];
		}
	}
	//���ȼ�һ
	L1->length--;
	return OK;
}

/*��ȡԪ�ز�����
ǰ��������˳����Ѿ�����
���岽�裺
1.�ж�˳����Ƿ�Ϊ��
2.�ж�i�Ƿ��ںϷ���Χ��
3.����ӦԪ�ظ�ֵ��*e
*/
Status GetElem(SqList* L1, int i, ElemType* e)//��ȡԪ��
{
	//�ж�˳����Ƿ�Ϊ��
	if (L1->length == 0)
	{
		return ERROR;
	}
	//�ж�i�Ƿ��ںϷ���Χ��
	if (i < 1 || i > L1->length)
	{
		return ERROR;
	}
	//����ӦԪ�ظ�ֵ��*e
	*e = L1->elem[i - 1];
	return OK;
}

//��ӡ˳���������Ԫ��
void PrintList(SqList* L1)//��ӡ����Ԫ��
{
	//�ж�˳����Ƿ�Ϊ��
	if (L1->length == 0)
	{
		printf("The list is empty!\n");
		return;
	}
	//������ӡ����Ԫ��
	int i = 0;
	for (i = 0; i < L1->length; i++)
	{
		printf("%-4d", L1->elem[i]);
	}
	printf("\n");
}