#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
struct Student
{
	char name[20];
	int age;
};
int main()
{
	struct Student stu[3] = { {"zhangsan", 30}, {"lisi", 50}, {"wangwu", 40} };
	int sz = sizeof(stu) / sizeof(stu[0]);
	int max = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%-4d", stu[i].age);
		printf("%s\n", stu[i].name);
	}
	for (i = 0; i < sz - 1; i++)
	{
		if (stu[i].age > stu[i + 1].age)
		{
			max = i;
		}
		else
		{
			max = i + 1;
		}
	}
	printf("%s\n", stu[max].name);
	return 0;
}