#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
void PrintStudent(const struct Student* ps)
{
	cout << "ѧ��������" << ps->name << endl;
	cout << "ѧ�����䣺" << ps->age << endl;
	cout << "ѧ��������" << ps->score << endl;
}

void PrintStudent2(struct Student s)
{
	cout << "ѧ��������" << s.name << endl;
	cout << "ѧ�����䣺" << s.age << endl;
	cout << "ѧ��������" << s.score << endl;
}