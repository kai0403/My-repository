#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	int a = 10;
	int b = 20;
	//const int* p = &a;//����ָ��
	//p = &b;
	//*p = 30;
	//cout << *p << endl;
	//cout << b << endl;
	//int* const p = &a;//ָ�볣��
	//*p = 30;
	//p = &b;
	//cout << *p << endl;
	//cout << a << endl;
	//int const* p = &a;//����ָ��
	//p = &b;
	//*p = 40;
	//const int* const p = &a;//����ָ�볣��
	//p = &b;
	//*p = 30;
	return 0;
}