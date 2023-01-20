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
		if (i == 0)
		{
			cout << "[";
		}
		if (i == 5)
		{
			cout << arr[i] << "]" << endl;
			break;
		}
		cout << arr[i] << ", ";
	}
	for (int i = 5; i >= 0; i--)
	{
		if (i == 5)
		{
			cout << "[";
		}
		if (i == 0)
		{
			cout << arr[i] << "]" << endl;
			break;
		}
		cout << arr[i] << ", ";
	}
	return 0;
}