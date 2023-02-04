#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
void Print(char* str)
{
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		cout << str[i] << " ";
	}
}

void Print2(struct Student stu)
{
	cout << stu.name << " " << stu.age << " " << stu.num << endl;
}

void Print3(struct Student* stu, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << stu[i].name << " " << stu[i].age << " " << stu[i].num << endl;
	}
}