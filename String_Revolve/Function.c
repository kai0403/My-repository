#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
//void StrRevolve(char str[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)//执行n次字符串旋转
//	{
//		char temp = str[0];//将数组首元素赋给临时变量temp
//		int j = 0;
//		for (j = 0; j < strlen(str) - 1; j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[strlen(str) - 1] = temp;
//	}
//}
//void StrRevolve(char* str, int n)
//{
//	assert(str);
//	int i = 0;
//	for (i = 0; i < n; i++)//执行n次字符串旋转
//	{
//		char temp = str[0];//将数组首元素赋给临时变量temp
//		int j = 0;
//		for (j = 0; j < strlen(str) - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + strlen(str) - 1) = temp;
//	}
//}
void Reverse(char* str, int n)//逆序n个字符
{
	assert(str);
	assert(n <= strlen(str));
	int i = 0;
	for (i = 0; i < n / 2; i++)
	{
		char temp = *(str + i);
		*(str + i) = *(str + n - 1 - i);
		*(str + n - 1 - i) = temp;
	}
}
void Left_Revolve(char* str, int n)//左旋转n个字符
{
	assert(str);
	assert(n <= strlen(str));
	Reverse(str, n);
	Reverse(str + n, strlen(str) - n);
	Reverse(str, strlen(str));
}

int Is_Left_Move(char* str1, char* str2)
{
	int i = 0;
	for (i = 0; i < strlen(str1); i++)
	{
		Left_Revolve(str1, 1);
		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
	}
	return 0;
}