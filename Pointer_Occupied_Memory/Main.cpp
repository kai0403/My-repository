#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	int a = 10;
	int* pa = &a;
	cout << pa << endl;
	cout << sizeof(int*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;
	
	return 0;
}