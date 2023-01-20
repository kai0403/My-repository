#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int arr[4][2] = { {1, 226644}, {2, 773388}, {3, 254565}, {4, 116699} };
	long long int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum += arr[i][1];
	}
	cout << sum << endl;
	return 0;
}