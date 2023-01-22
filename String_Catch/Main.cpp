#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	char str[100] = "0";
	cin.get(str, 99);
	cin.get();
	char str1[100] = "0";
	cin.get(str1, 99);
	strcat(str, str1);
	cout << str << endl;
	return 0;
}