#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	float grade = 0;
	cin >> grade;
	if (grade > 100 || grade < 0)
	{
		cout << "�ɼ����Ϸ�" << endl;
	}
	else if (grade >= 90)
	{
		cout << "����" << endl;
	}
	else if (grade >= 80)
	{
		cout << "��" << endl;
	}
	else if (grade >= 70)
	{
		cout << "��" << endl;
	}
	else if (grade >= 60)
	{
		cout << "����" << endl;
	}
	else
	{
		cout << "��" << endl;
	}
	return 0;
}