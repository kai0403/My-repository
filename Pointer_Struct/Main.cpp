#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"

int main()
{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* parr = arr;
	//cout << parr << endl;
	//cout << arr << endl;//��������Ϊ��Ԫ�ص�ַ
	//cout << *parr << endl;//�����÷�����������Ԫ��1
	//cout << *arr << endl;
	//cout << *(parr + 1) << endl;
	//cout << *arr++ << endl;//error,�������޷����ı�
	//return 0;
	/*char str[] = "Improvise, adapt, overcome";*/
	/*Print(str);*/
	struct Student stu[3] =
	{
		{"����", 18, "2011911311"},
		{"����", 20, "2011911312"},
		{"����", 30, "2011911313"}
	};
	Print3(stu, sizeof(stu) / sizeof(stu[0]));
}