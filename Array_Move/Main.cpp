#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	int arr[6] = { 0 };
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}//��������Ԫ��
	for (int i = 0; i < 6; i++)
	{
		if (Is_All_Null(arr, 6, i) == 1)
		{
			break;
		}
		if (arr[i] == 0)
		{
			for (int j = i; j < 5; j++)
			{
				arr[j] = arr[j + 1];
			}
			i--;
			arr[5] = 0;
		}
		
	}
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}//��ӡ����Ԫ��
	return 0;
}