#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	Phone p1("HUAWEI mate30");
	Person p("уехЩ", p1);
	cout << p.name << " have the " << p1.brand << endl;
	system("pause");
	return 0;
}