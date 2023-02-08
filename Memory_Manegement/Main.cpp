#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	//int* ret = Function();
	//cout << *ret << endl;
	//cout << *ret << endl;
	//cout << *ret << endl;
	int* ret = Function2();
	for (int i = 0; i < 10; i++)
	{
		ret[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << ret[i] << " " << endl;
	}
	delete ret;
	return 0;
}