#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	//Student s = { "张三", 20, 85 };//创建结构体变量
	//Student* ps = &s;//指针指向结构体
	//cout << "姓名: " << ps->name << endl;
	//cout << "年龄: " << ps->age << endl;
	//cout << "分数: " << ps->score << endl;
	/*Teacher t =
	{
		"101902",
		"老王",
		20,
		{"张三", 20, 85}
	};
	Teacher* pt = &t;
	cout << "教师编号：" << pt->id << endl;
	cout << "教师姓名：" << pt->name << endl;
	cout << "教师年龄：" << pt->age << endl;
	cout << "所教学生姓名：" << pt->stu.name << endl;
	cout << "所教学生年龄：" << pt->stu.age << endl;
	cout << "所教学生分数：" << pt->stu.score << endl;*/
	Student s = { "张三", 30, 70 };
	PrintStudent2(s);
 	return 0;
}