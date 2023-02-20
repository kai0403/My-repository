#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
Complex* Assgin(float real, float imag)//��ʼ��
{
	Complex* temp = (Complex*)malloc(sizeof(Complex));
	if (temp == NULL)//����Ƿ񿪱ٳɹ�
	{
		return 0;
	}
	temp->realpart = real;//������ʵ����ֵ
	temp->imagpart = imag;//�������鲿��ֵ
	return temp;
}

Complex* Add(Complex* c1, Complex* c2)//�ӷ�
{
	Complex* temp1 = (Complex*)malloc(sizeof(Complex));//�������ٿռ�
	if (temp1 == NULL)//����Ƿ񿪱ٳɹ�
	{
		return 0;
	}
	temp1->realpart = c1->realpart + c2->realpart;//ʵ�����
	temp1->imagpart = c1->imagpart + c2->imagpart;//�鲿���
	return temp1;//���������ϵ�ָ��
}

Complex* Subtract(Complex* c1, Complex* c2)//����
{
	Complex* temp2 = (Complex*)malloc(sizeof(Complex));//�������ٿռ�
	if (temp2 == NULL)//����Ƿ񿪱ٳɹ�
	{
		return 0;
	}
	temp2->realpart = c1->realpart - c2->realpart;//ʵ�����
	temp2->imagpart = c1->imagpart - c2->imagpart;//�鲿���
	return temp2;//���������ϵ�ָ��
}

Complex* Multiple(Complex* c1, Complex* c2)//�˷�
{
	Complex* temp3 = (Complex*)malloc(sizeof(Complex));//�������ٿռ�
	if (temp3 == NULL)//����Ƿ񿪱ٳɹ�
	{
		return 0;
	}
	temp3->realpart = c1->realpart * c2->realpart - c1->imagpart * c2->imagpart;//ʵ�����
	temp3->imagpart = c1->imagpart * c2->realpart + c1->realpart * c2->imagpart;//�鲿���
	return temp3;//���������ϵ�ָ��
}

Complex* Divide(Complex* c1, Complex* c2)
{
	Complex* temp4 = (Complex*)malloc(sizeof(Complex));//�������ٿռ�
	if (temp4 == NULL)//����Ƿ񿪱ٳɹ�
	{
		return 0;
	}
	temp4->imagpart = (c1->imagpart * c2->realpart - c1->realpart * c2->imagpart) / (pow(c2->imagpart, 2) + pow(c2->realpart, 2));
	temp4->realpart = (c1->realpart * c2->realpart + c1->imagpart * c2->imagpart) / (pow(c2->imagpart, 2) + pow(c2->realpart, 2));
	return temp4;//���������ϵ�ָ��
}

