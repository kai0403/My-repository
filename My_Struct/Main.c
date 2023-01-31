#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
struct Student
{
	char c1;
	char c2;
	int age;
}stu;

struct Book
{
	char c1;
	int a;
	char c2;
};
int main()
{
	/*printf("%zd\n", sizeof(Node));
	pstu = &stu;
	printf("%p\n", pstu);*/
	/*struct Student s1 = { "张三", "20000194987", 30 };
	printf("%s, %s, %d\n", s1.name, s1.num, s1.age);
	struct Student stu = { "李四", "20000194988", 20 };
	printf("%s, %s, %d\n", stu.name, stu.num, stu.age);*/
	/*struct Student s1 = { "张三", "20000194987", 30 };
	struct Student* stu1 = &s1;
	printf("%s, %s, %d\n", stu1->name, stu1->num, stu1->age);
	struct Student stu = { "李四", "20000194988", 20 };
	struct Student* stu2 = &stu;
	printf("%s, %s, %d\n", stu2->name, stu2->num, stu2->age);*/
	printf("%zd\n", sizeof(struct Student));
	printf("%zd\n", sizeof(struct Book));
	return 0;
}