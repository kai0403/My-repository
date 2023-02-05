#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
void PrintStudent(const struct Student* ps)
{
	cout << "学生姓名：" << ps->name << endl;
	cout << "学生年龄：" << ps->age << endl;
	cout << "学生分数：" << ps->score << endl;
}

void PrintStudent2(struct Student s)
{
	cout << "学生姓名：" << s.name << endl;
	cout << "学生年龄：" << s.age << endl;
	cout << "学生分数：" << s.score << endl;
}