#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
char* MyStrncpy(char* dest, const char* src, size_t n)
{
	char* str = dest;
	int len1 = strlen(dest);//目的字符串长度
	int len2 = strlen(src);//源字符串长度
	if (len1 < len2)//目的字符串长度小于源字符串长度
	{
		/*printf("The size of destination is too small!\n");*///给出提示
		return "The size of destination is too small!";//强制退出函数
	}
	else if (n > len1 + 1)//需要拷贝的字符个数超过了目的字符串能够接受的额度
	{
		/*printf("The number of copied characters is too big!\n");*///给出提示
		return "The number of copied characters is too big!";//强制退出
	}
	//目的字符串长度大于等于源字符串长度
	//1.n大于len2,即相当于strcpy
	if (n > len2)
	{
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		int i = 0;
		for (i = 0; i < len1 - len2; i++)
		{
			*dest = NULL;
			dest++;
		}
		*dest = '\0';
	}
	//2.n小于等于len2
	else
	{
		while (*src != '\0' && n > 0)//将前n个字符拷贝成功
		{
			*dest = *src;
			dest++;
			src++;
			n--;
		}
		//不需要将dest所指向的字符串的剩下字符置空
	}
	return str;
}

int MyStrncmp(const char* str1, const char* str2, size_t num)
{
	//num可以无限大，比较是否结束是根据字符是否相同以及是否为'\0'决定
	while (*str1 && *str2 && num > 0)
	{
		if (*str1 > *str2)
		{
			return 1;
		}
		else if (*str1 < *str2)
		{
			return -1;
		}
		str1++;
		str2++;
		num--;
	}
	return 0;
}

char* MyStrncat(char* dest, const char* src, int num, int size_str1)
{
	int len1 = strlen(dest);//目的地字符串的长度
	int len2 = strlen(src);//源字符串的长度
	//1.num > len2, 即相当于strcat
	if (num > len2)
	{
		if (size_str1 - len1 < len2 + 1)
		{
			return "The size of destination is too small!";
		}
		char* str = dest;//保存dest所指字符串的首地址
		//想让dest指到自己的末尾的'\0'
		while (*dest != '\0')
		{
			dest++;
		}
		//将src所指字符串接到dest末尾处
		while (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';//将dest所指字符串末尾处补上'\0'
		return str;
	}
	else
	{
		if (size_str1 - len1 < num + 1)
		{
			return "The size of destination is too small!";
		}
		char* str = dest;//保存dest所指字符串的首地址
		//想让dest指到自己的末尾的'\0'
		while (*dest != '\0')
		{
			dest++;
		}
		//将src所指字符串接到dest末尾处
		while (*src && num > 0)
		{
			*dest = *src;
			dest++;
			src++;
			num--;
		}
		*dest = '\0';//将dest所指字符串末尾处补上'\0'
		return str;
	}
}