#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
#define Day 7//�궨��һ��������
int main()
{
	int a = 10;//����һ�����ͱ���a
	const int month = 12;
	cout << "There are " << Day << " days in a week."<<endl;//��ӡһ��������
	cout << "There are " << month << " months in a year." << endl;//��ӡһ����12����
	cout << "a = " << a << endl;//��a��ӡ����Ļ��
	cout << "Hello World" << endl;//��ӡHello World����Ļ��
	system("pause");//������Ļ����Enter�������
	return 0;
}