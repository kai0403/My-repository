#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	char arr[5] = "0";
	printf("Please input a four digit number:\n");
	scanf("%s", arr);
	for (int i = 0; i < 4; i++)
	{
		printf("%c ", arr[i]);
	}
	for (int j = 0; j < 4; j++)
	{
		arr[j] += 5;
		arr[j] = (arr[j] - '0') % 10 + '0';
	}
	printf("\n");
	for (int k = 0; k < 4; k++)
	{
		printf("%c ", arr[k]);
	}
	for (int i = 0; i < 2; i++)
	{
		char temp = arr[i];
		arr[i] = arr[3 - i];
		arr[3 - i] = temp;
	}
	printf("\n");
	for (int k = 0; k < 4; k++)
	{
		printf("%c ", arr[k]);
	}
	return 0;
}