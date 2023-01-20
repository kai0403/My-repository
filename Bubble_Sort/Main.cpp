#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int arr[6] = { 0 };
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}