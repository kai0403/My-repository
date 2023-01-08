#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int input = 0;
	int i = 0;
	int j = 0;
	printf("Please input an integral number:\n");
	scanf("%d", &input);
	int arr[11] = { 1,4,9,16,25,36,49,64,81,100 };
	int sz = sizeof(arr) / sizeof(int);
	/*printf("Sz is %d\n", sz);
	for (i = 0; i < sz; i++)
	{
		printf("%-4d", arr[i]);
	}*/
	if (input >= arr[sz - 2])
	{
		arr[sz - 1] = input;
	}
	else
	{
		for (i = 0; i < sz - 1; i++)
		{
			if (input <= arr[i])
			{
				for (j = sz - 2; j >= i; j--)
				{
					arr[j + 1] = arr[j];
				}
				arr[j + 1] = input;
				break;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%-4d", arr[i]);
	}
	return 0;
}