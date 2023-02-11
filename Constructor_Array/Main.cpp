#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	int num = 0;
	cin >> num;
	Array arr(num);
	arr.SetArray();
	arr.ShowArray();
	return 0;
}