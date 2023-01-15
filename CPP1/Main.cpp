#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
#define Day 7//宏定义一周是七天
int main()
{
	int a = 10;//定义一个整型变量a
	const int month = 12;
	cout << "There are " << Day << " days in a week."<<endl;//打印一周有七天
	cout << "There are " << month << " months in a year." << endl;//打印一年有12个月
	cout << "a = " << a << endl;//将a打印到屏幕上
	cout << "Hello World" << endl;//打印Hello World在屏幕上
	system("pause");//冻结屏幕，按Enter键后继续
	return 0;
}