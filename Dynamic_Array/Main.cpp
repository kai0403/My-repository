#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	/*int n = 0;
	cin >> n;
	int* arr = new int[n]();
	for (int i = 0; i < n; i++)
	{
		arr[i] = n + i;
		cout << arr[i] << " ";
	}
	delete [] arr;*/
	int n = 0;
	cin >> n;
	/*int** a = new int* [n]();
	int* a1 = new int[n]();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i] = 
		}
		cout << endl;
	}
	return 0;*/
	vector<vector<int> >swp(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			swp[i][j] = i + j;
			cout << swp[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}