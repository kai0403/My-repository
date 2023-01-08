#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int Add(int x, int y)
{
	return x + y;
}

char* My_Strcpy(char* dest, const char* src)
{
	char* ret = dest;//保存目的字符串首元素地址
	assert(dest != NULL);//排除空指针
	assert(src != NULL);//排除空指针
	while (*dest++ = *src++)//将源字符串拷贝到目的字符串中
	{
		;
	}
	return ret;//返回目的字符串
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