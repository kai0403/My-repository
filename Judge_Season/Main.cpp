#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int month = 0;
	cin >> month;
	if (month < 1 || month > 12)
	{
		cout << "²»ºÏ·¨" << endl;
	}
	else if (month >= 3 && month <= 5)
	{
		cout << "´º¼¾" << endl;
	}
	else if (month >= 6 && month <= 8)
	{
		cout << "ÏÄ¼¾" << endl;
	}
	else if (month >= 9 && month <= 11)
	{
		cout << "Çï¼¾" << endl;
	}
	else
	{
		cout << "¶¬¼¾" << endl;
	}
	return 0;
}