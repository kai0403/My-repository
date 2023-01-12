#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	/*int i = 0;
	int arr[4] = { 0 };
	printf("Please input four integral numbers:\n");
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 4; i++)
	{
		printf("%-4d", arr[i]);
	}
	printf("\n");
	for (i = 0; i < 4; i++)
	{
		arr[i] += 5;
		arr[i] %= 10;
	}
	for (i = 0; i < 2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[3 - i];
		arr[3 - i] = temp;
	}
	for (i = 0; i < 4; i++)
	{
		printf("%-4d", arr[i]);
	}
	printf("\n");*/
	char str[4] = "0";
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		scanf("%c", &str[i]);
		getchar();
	}
	for (i = 0; i < 4; i++)
	{
		printf("%-4c", str[i]);
	}
	printf("\n");
	for (i = 0; i < 4; i++)
	{
		str[i] += 5;
		str[i] = (str[i] - '0') % 10 + '0';
	}
	for (i = 0; i < 2; i++)
	{
		char temp = str[i];
		str[i] = str[3 - i];
		str[3 - i] = temp;
	}
	for (i = 0; i < 4; i++)
	{
		printf("%-4c", str[i]);
	}
	printf("\n");
	return 0;
}