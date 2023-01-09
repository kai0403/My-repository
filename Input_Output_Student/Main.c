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
int main()
{
	struct Student stu1 = { "张三", 19, "20220530", 'M' };
	struct Student stu2 = { "李四", 20, "20220420", 'F' };
	struct Student stu3 = { "王五", 21, "20220627", 'M' };
	Print(stu1);
	Print(stu2);
	Print(stu3);
	return 0;
}