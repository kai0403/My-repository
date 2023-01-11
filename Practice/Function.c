#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
struct Student
{
	char name[20];
	int age;
};//定义一个结构体类型Student, 属性包括学生姓名和年龄

int cmp_int(void* a, void* b)
{
	return *(int*)a - *(int*)b;
}//实现整型数组元素的比较

int cmp_struct_age(void* a, void* b)
{
	return ((struct Student*)a)->age - ((struct Student*)b)->age;
}//实现结构体按年龄的比较

int cmp_struct_name(void* a, void* b)
{
	return strcmp(((struct Student*)a)->name, ((struct Student*)b)->name);
}

void Swap(char* a, char* b, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *(a + i);
		*(a + i) = *(b + i);
		*(b + i) = temp;
	}
}
void Bubble_Order(void* base, int num, int width, int(*cmp)(void*, void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void Bubble_Order_Int()
{
	int i = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//待排序的整型数组
	int sz1 = sizeof(arr) / sizeof(arr[0]);//计算整型数组元素的个数
	Bubble_Order(arr, sz1, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz1; i++)
	{
		printf("%-4d\n", arr[i]);
	}//打印排序后的整型数组
}

void Bubble_Order_Struct()
{
	int i = 0;
	struct Student stu[] = { {"Zhangsan", 40}, {"Lisi", 30}, {"Wangwu", 50} };//需要排序的结构体数组
	int sz2 = sizeof(stu) / sizeof(stu[0]);//计算结构体数组元素的个数
	Bubble_Order(stu, sz2, sizeof(stu[0]), cmp_struct_age);
	for (i = 0; i < sz2; i++)
	{
		printf("%d\n", stu[i].age);
	}//打印排序后的年龄

	Bubble_Order(stu, sz2, sizeof(stu[0]), cmp_struct_name);
	for (i = 0; i < sz2; i++)
	{
		printf("%s\n", stu[i].name);
	}//打印排序后的姓名
}