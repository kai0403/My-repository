#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Student
{
	string name;
	int age;
	string num;
};
void Print(char* str);
void Print2(struct Student stu);
void Print3(struct Student* stu, int len);