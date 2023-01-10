#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//char* My_Strcpy(char* dest, const char* src)
//{
//	char* ret = dest;//保存目的字符串首元素地址
//	assert(dest != NULL);//排除空指针
//	assert(src != NULL);//排除空指针
//	while (*dest++ = *src++)//将源字符串拷贝到目的字符串中
//	{
//		;
//	}
//	return ret;//返回目的字符串
//}
//
//unsigned long int My_Strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int Check()
//{
//	int a = 1;
//	return *((char*) &a);
//}
//
//void Print(int(*parr)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//void Menu()
//{
//	printf("1.Add\n");
//	printf("2.Sub\n");
//	printf("3.Mul\n");
//	printf("4.Div\n");
//	printf("0.Exit\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}

//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void Calc(int (*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("Please input two integral numbers:\n");
//	scanf("%d%d", &x, &y);
//	printf("The result is %d\n",p(x, y));
////}
//void Sizeof(int arr[], int n)
//{
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//}
void Bubble_Order(int arr[], int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}