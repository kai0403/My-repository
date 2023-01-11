#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
struct Student
{
	char name[20];
	int age;
};//����һ���ṹ������Student, ���԰���ѧ������������

int cmp_int(void* a, void* b)
{
	return *(int*)a - *(int*)b;
}//ʵ����������Ԫ�صıȽ�

int cmp_struct_age(void* a, void* b)
{
	return ((struct Student*)a)->age - ((struct Student*)b)->age;
}//ʵ�ֽṹ�尴����ıȽ�

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
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//���������������
	int sz1 = sizeof(arr) / sizeof(arr[0]);//������������Ԫ�صĸ���
	Bubble_Order(arr, sz1, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz1; i++)
	{
		printf("%-4d\n", arr[i]);
	}//��ӡ��������������
}

void Bubble_Order_Struct()
{
	int i = 0;
	struct Student stu[] = { {"Zhangsan", 40}, {"Lisi", 30}, {"Wangwu", 50} };//��Ҫ����Ľṹ������
	int sz2 = sizeof(stu) / sizeof(stu[0]);//����ṹ������Ԫ�صĸ���
	Bubble_Order(stu, sz2, sizeof(stu[0]), cmp_struct_age);
	for (i = 0; i < sz2; i++)
	{
		printf("%d\n", stu[i].age);
	}//��ӡ����������

	Bubble_Order(stu, sz2, sizeof(stu[0]), cmp_struct_name);
	for (i = 0; i < sz2; i++)
	{
		printf("%s\n", stu[i].name);
	}//��ӡ����������
}