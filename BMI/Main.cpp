#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	double weight = 0;//����(kg)
	double height = 0;//���(m)
	double BMI = 0;//����ָ��
	cin >> weight;//��������
	cin >> height;//�������
	BMI = weight / pow(height, 2);
	if (BMI < 18.5)
	{
		cout << "ƫ��" << endl;
	}
	else if (BMI < 20.9)
	{
		cout << "����" << endl;
	}
	else if (BMI <= 24.9)
	{
		cout << "����" << endl;
	}
	else
	{
		cout << "ƫ��" << endl;
	}
	return 0;
}