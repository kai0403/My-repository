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
	}//随机从键盘输入6个数
	for (int i = 0; i < 5; i++)//遍历数组所有元素
	{
		min = arr[i];//设置初始最小值是每次进行比较的第一个元素
		for (int j = i + 1; j < 6; j++)//从第i+2个数开始进行选择替换
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