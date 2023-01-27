#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	char str1[100] = { 0 };
	char str2[100] = { 0 };
	cin.getline(str1, sizeof(str1));
	cin.getline(str2, sizeof(str2));
	int ret = MyStrcmp(str1, str2);
	cout << ret << endl;
	return 0;
}