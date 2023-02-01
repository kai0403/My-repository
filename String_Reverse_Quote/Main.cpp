#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	string str = "0";
	getline(cin, str);
	StrReverse(str);
	cout << str << endl;
	return 0;
}