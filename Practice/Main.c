#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
struct Student
{
	char name[20];
	int age;
};//����һ���ṹ������Student, ���԰���ѧ������������
int main()
{
	int i = 0;
	Bubble_Order_Int();
	Bubble_Order_Struct();
	return 0;
}