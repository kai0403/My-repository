#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
unsigned char i = 0;
int main()
{
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char ch[30] = "You can be anyone you wanna be";
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int j = 0; j < 30; j++)
	{
		printf("%c ", ch[j]);
	}
	printf("\n");
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);*/
	/*int ret = 0;
	int sum = 0;
	int input = 0;
	printf("Please input an integral number:\n");
	scanf("%d", &input);
	for (int i = 1; i <= input; i++)
	{
		int ret = 1;
		for (int j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n", sum);*/
	/*i*//*nt i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%p\n", &i);
	printf("%p\n", arr);*/
	//char arr1[] = "Just do it";
	//char arr2[] = NULL;
	//printf("%s\n", My_Strcpy(arr2, arr1));//Á´Ê½·ÃÎÊº¯Êý
	/*int ret = Check();
	if (1 == ret)
	{
		printf("Small end.\n");
	}
	else
	{
		printf("Big end.\n");
	}*/
	/*char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);*/
	/*int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);*/
	/*unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
		Sleep(100);
	}*/
	/*char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d\n", strlen(a));*/
	/*for (i = 0; i <= 255; i++)
	{
		printf("Hello world!\n");
	}*/
	/*int a = 0;
	int* pa = &a;
	printf("%d\n", sizeof(pa));*/
	/*int n = 9;
	float* pfloat = (float*)&n;
	printf("%d\n", n);
	printf("%f\n", *pfloat);
	*pfloat = 9.0;
	printf("%d\n", n);
	printf("%f\n", *pfloat);
	float n1 = 5.5;*/
	/*int a = 10;
	int* pa = &a;
	printf("%d\n", sizeof(pa));
	int arr[10] = { 0 };
	printf("%d\n", sizeof(&arr[0]));*/
	/*char* p = "You can be anyone you wanna be";
	*p = 'y';
	printf("%s\n", p);*/
	/*char* p1 = "abcdef";
	char* p2 = "abcdef";
	if (p1 == p2)
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}*/
	/*int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* parr[3] = { arr1, arr2, arr3 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}*/
	int arr[3][5] = { {1,3,5,7,9}, {2,3,4,5,6}, {3,4,5,6,7} };
    void (*p) (int * [5], int, int) = Print;
	printf("%p\n", *p);
	printf("%p\n", Print);
	p(arr, 3, 5);
	return 0;
}