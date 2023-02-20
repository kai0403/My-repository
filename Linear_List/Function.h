#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct Complex//定义一个结构体实现复数
{
	float realpart;//复数的实部
	float imagpart;//复数的虚部
}Complex;

Complex* Assgin(float real, float imag);//复数的初始化
Complex* Add(Complex* complex1, Complex* complex2);//复数相加
Complex* Subtract(Complex* complex1, Complex* complex2);//复数相减
Complex* Multiple(Complex* complex1, Complex* complex2);//复数相乘
Complex* Divide(Complex* complex1, Complex* complex2);//复数相除