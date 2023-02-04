#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"

int main()
{
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* parr = arr;
	//cout << parr << endl;
	//cout << arr << endl;//数组名即为首元素地址
	//cout << *parr << endl;//解引用发现是数组首元素1
	//cout << *arr << endl;
	//cout << *(parr + 1) << endl;
	//cout << *arr++ << endl;//error,数组名无法被改变
	//return 0;
	/*char str[] = "Improvise, adapt, overcome";*/
	/*Print(str);*/
	struct Student stu[3] =
	{
		{"张三", 18, "2011911311"},
		{"李四", 20, "2011911312"},
		{"王五", 30, "2011911313"}
	};
	Print3(stu, sizeof(stu) / sizeof(stu[0]));
}