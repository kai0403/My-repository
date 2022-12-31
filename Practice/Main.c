#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
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
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}