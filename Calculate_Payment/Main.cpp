#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	float input = 0;
	float ret = 0;
	cout << "Please input your payment:" << endl;
	cin >> input;
	if (input < 100)
	{
		ret = input;
	}
	else if (input < 500)
	{
		ret = input * 0.9;
	}
	else if (input < 2000)
	{
		ret = input * 0.8;
	}
	else if (input < 5000)
	{
		ret = input * 0.7;
	}
	else
	{
		ret = input * 0.6;
	}
	cout << ret << endl;
	return 0;
}