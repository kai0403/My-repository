#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
Complex* Assgin(float real, float imag)//初始化
{
	Complex* temp = (Complex*)malloc(sizeof(Complex));
	if (temp == NULL)//检查是否开辟成功
	{
		return 0;
	}
	temp->realpart = real;//给复数实部赋值
	temp->imagpart = imag;//给复数虚部赋值
	return temp;
}

Complex* Add(Complex* c1, Complex* c2)//加法
{
	Complex* temp1 = (Complex*)malloc(sizeof(Complex));//堆区开辟空间
	if (temp1 == NULL)//检查是否开辟成功
	{
		return 0;
	}
	temp1->realpart = c1->realpart + c2->realpart;//实部相加
	temp1->imagpart = c1->imagpart + c2->imagpart;//虚部相加
	return temp1;//返回相加完毕的指针
}

Complex* Subtract(Complex* c1, Complex* c2)//减法
{
	Complex* temp2 = (Complex*)malloc(sizeof(Complex));//堆区开辟空间
	if (temp2 == NULL)//检查是否开辟成功
	{
		return 0;
	}
	temp2->realpart = c1->realpart - c2->realpart;//实部相减
	temp2->imagpart = c1->imagpart - c2->imagpart;//虚部相减
	return temp2;//返回相加完毕的指针
}

Complex* Multiple(Complex* c1, Complex* c2)//乘法
{
	Complex* temp3 = (Complex*)malloc(sizeof(Complex));//堆区开辟空间
	if (temp3 == NULL)//检查是否开辟成功
	{
		return 0;
	}
	temp3->realpart = c1->realpart * c2->realpart - c1->imagpart * c2->imagpart;//实部相乘
	temp3->imagpart = c1->imagpart * c2->realpart + c1->realpart * c2->imagpart;//虚部相乘
	return temp3;//返回相加完毕的指针
}

Complex* Divide(Complex* c1, Complex* c2)
{
	Complex* temp4 = (Complex*)malloc(sizeof(Complex));//堆区开辟空间
	if (temp4 == NULL)//检查是否开辟成功
	{
		return 0;
	}
	temp4->imagpart = (c1->imagpart * c2->realpart - c1->realpart * c2->imagpart) / (pow(c2->imagpart, 2) + pow(c2->realpart, 2));
	temp4->realpart = (c1->realpart * c2->realpart + c1->imagpart * c2->imagpart) / (pow(c2->imagpart, 2) + pow(c2->realpart, 2));
	return temp4;//返回相加完毕的指针
}

