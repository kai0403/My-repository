#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Student
{
	string name;
	int age;
	int score;
};//定义结构体

struct Teacher
{
	string id;//教师编号
	string name;//教师姓名
	int age;//教师年龄
	struct Student stu;//所教学生
};

void PrintStudent(const struct Student* ps);
void PrintStudent2(struct Student s);