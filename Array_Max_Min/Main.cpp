#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int arr[6] = { 0 };
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}//保存6个数到数组里
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << min << ' ' << max << endl;
	return 0;
}