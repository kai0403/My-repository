#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	int* p = NULL;
	/**p = 100;
	cout << *p << endl;*/
	//空指针所指向的内存无法被访问
	cout << p << endl;
	return 0;
}