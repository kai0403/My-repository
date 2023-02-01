#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	int num1 = 0;
	int num2 = 0;
	cin >> num1;
	cin >> num2;
	Swap(num1, num2);
	cout << num1 << " " << num2 << endl;
	return 0;
}