#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct Complex//����һ���ṹ��ʵ�ָ���
{
	float realpart;//������ʵ��
	float imagpart;//�������鲿
}Complex;

Complex* Assgin(float real, float imag);//�����ĳ�ʼ��
Complex* Add(Complex* complex1, Complex* complex2);//�������
Complex* Subtract(Complex* complex1, Complex* complex2);//�������
Complex* Multiple(Complex* complex1, Complex* complex2);//�������
Complex* Divide(Complex* complex1, Complex* complex2);//�������