#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int Add(int x, int y)
{
	return x + y;
}

char* My_Strcpy(char* dest, const char* src)
{
	char* ret = dest;//����Ŀ���ַ�����Ԫ�ص�ַ
	assert(dest != NULL);//�ų���ָ��
	assert(src != NULL);//�ų���ָ��
	while (*dest++ = *src++)//��Դ�ַ���������Ŀ���ַ�����
	{
		;
	}
	return ret;//����Ŀ���ַ���
}

unsigned long int My_Strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int Check()
{
	int a = 1;
	return *((char*) &a);
}

void Print(int(*parr)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
}