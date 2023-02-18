#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	//int Class84 = 100;
	//CAT(Class, 84) = 250;
 //	printf("%d\n", CAT(Class,84));
	///*printf("%d\n", Class##84);*/
	/*int a = 10;
	int b = 11;
	int max = MAX(a++, b++);
	printf("%d\n", max);
	printf("%d\n", a);
	printf("%d\n", b);*/
	/*int a = 10;
	int b = 20;
	int max = Max(a++, b++);
	printf("%d\n", max);
	max = MAX(a, b);
	printf("%d\n", max);*/
	//printf("%zd\n", SIZEOF(int*));
//#undef MALLOC(num, type)
	/*int* p = MALLOC(10, int);
	
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		assert(p);
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%-4d", *(p + i));
	}
	free(p);
	p = NULL;*/
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
#ifndef DEBUG
		printf("%-4d", arr[i]);
#endif
	}*/
//#if 1==2
//	printf("hello\n");
//#elif 0 == 0
//	printf("world\n");
//#else
//	printf("hello world\n");
//#endif
	/*struct S s;*/
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, num));
	printf("%d\n", OFFSETOF(struct S, c2));
	system("pause");
	return 0;
}