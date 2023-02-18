#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int Add(int a, int b)
{
	return a + b;
}
/*int arr[10] = { 0 };
int i = 0;
for (i = 0; i < 10; i++)
{
	arr[i] = i;
}
for (i = 0; i < 10; i++)
{
	printf("%-4d", arr[i]);
}
printf("\n");
int a = 10;
int b = 20;
int ret = Add(a, b);
printf("ret = %d\n", ret);*/
//printf("%s\n", __FILE__);//打印文件绝对路径
//printf("%d\n", __LINE__);//打印代码所在行数
//printf("%s\n", __DATE__);//打印日期
//printf("%s\n", __TIME__);//打印时间
/*int i = 0;
int arr[10] = { 0 };
FILE* pf = fopen("log.txt", "w");
if (pf == NULL)
{
	printf("%s\n", strerror(errno));
}
for (i = 0; i < 10; i++)
{
	arr[i] = i;
	fprintf(pf, "data: %s, time: %s, line: %d, file: %s, i= %d\n", __DATE__, __TIME__, __LINE__, __FILE__, i);
}
for (i = 0; i < 10; i++)
{
	printf("%-4d", arr[i]);
	printf("%s\n", __FUNCTION__);
}
fclose(pf);
pf = NULL;*/
/*printf("%s\n", STR);*/
/*printf("%d\n", SQUARE(5 + 1));*/
/*int a = 10;
int b = 20;
PRINT(a);
PRINT(b);*/
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}