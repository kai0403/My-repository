#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
struct Student
{
	char name[20];
	int age;
	char num[20];
	char sex;
};
void Print(struct Student stu)
{
	struct Student* p = &stu;
	printf("Name is %s\n", stu.name);
	printf("Age is %d\n", stu.age);
	printf("Number is %s\n", stu.num);
	printf("Sex is %c\n", stu.sex);
}