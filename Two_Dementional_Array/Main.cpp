#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	/*int arr[2][3] =
	{
		{1, 2, 3},
		{4, 5, 6}
	};
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}*/
	int score[3][3] =
	{
		{100, 100, 100},
		{90, 50, 100},
		{60, 70, 80}
	};
	int row = sizeof(score) / sizeof(score[0]);
	int col = sizeof(score[0]) / sizeof(score[0][0]);
	for (int i = 0; i < row; i++)
	{
		int sum = 0;
		for (int j = 0; j < col; j++)
		{
			sum += score[i][j];
		}
		cout << sum << endl;
	}
	return 0;
}