#pragma once
#include <iostream>
using namespace std;
class Array
{
private:
	int n;//�����С
	int* arr;//ָ������
public:
	Array(int num)
	{
		n = num;
		arr = new int[n];
	}
	void SetArray()
	{
		for (int i = 0; i < n; i++)
		{
			cin >> *(arr + i);
		}
	}
	void ShowArray()
	{
		for (int i = 0; i < n; i++)
		{
			cout << *(arr + i) << " ";
		}
	}
	~Array()
	{
		if (arr != NULL)
		{
			delete[]arr;
			arr = NULL;
		}
	}
};