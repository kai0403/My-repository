#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int month = 0;
	cin >> month;
	if (month < 1 || month > 12)
	{
		cout << "���Ϸ�" << endl;
	}
	else if (month >= 3 && month <= 5)
	{
		cout << "����" << endl;
	}
	else if (month >= 6 && month <= 8)
	{
		cout << "�ļ�" << endl;
	}
	else if (month >= 9 && month <= 11)
	{
		cout << "�＾" << endl;
	}
	else
	{
		cout << "����" << endl;
	}
	return 0;
}