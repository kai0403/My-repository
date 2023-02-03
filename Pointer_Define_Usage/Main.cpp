#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	int a = 10;
	int* pa = &a;
	cout << pa << endl;
	cout << &a << endl;
	*pa = 100;
	cout << a << endl;
	cout << *pa << endl;
	cout << pa << endl;
	return 0;
}