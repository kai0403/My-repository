#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Student
{
	string name;
	int age;
	int score;
};//����ṹ��

struct Teacher
{
	string id;//��ʦ���
	string name;//��ʦ����
	int age;//��ʦ����
	struct Student stu;//����ѧ��
};

void PrintStudent(const struct Student* ps);
void PrintStudent2(struct Student s);