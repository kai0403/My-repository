#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	float grade = 0;
	cin >> grade;
	if (grade > 100 || grade < 0)
	{
		cout << "成绩不合法" << endl;
	}
	else if (grade >= 90)
	{
		cout << "优秀" << endl;
	}
	else if (grade >= 80)
	{
		cout << "良" << endl;
	}
	else if (grade >= 70)
	{
		cout << "中" << endl;
	}
	else if (grade >= 60)
	{
		cout << "及格" << endl;
	}
	else
	{
		cout << "差" << endl;
	}
	return 0;
}