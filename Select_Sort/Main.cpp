#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int arr[6] = { 0 };
	int min = 0;
	int index = 0;
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}//����Ӽ�������6����
	for (int i = 0; i < 5; i++)//������������Ԫ��
	{
		min = arr[i];//���ó�ʼ��Сֵ��ÿ�ν��бȽϵĵ�һ��Ԫ��
		for (int j = i + 1; j < 6; j++)//�ӵ�i+2������ʼ����ѡ���滻
		{
			if (min > arr[j])
			{
				min = arr[j];
			}
		}
		for (int k = 0; k < 6; k++)
		{
			if (min == arr[k])
			{
				index = k;
			}
		}
		int temp = arr[index];
		arr[index] = arr[i];
		arr[i] = temp;
	}
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}