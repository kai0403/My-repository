#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	char str[100] = "0";
	char substr[100] = "0";
	cin.getline(str, sizeof(str));
	cin.getline(substr, sizeof(substr));
	int ret = Func(str, substr);
	cout << ret << endl;
	return 0;
}