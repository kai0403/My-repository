#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Boss.h"
Boss::Boss(int num, string name, int depnum)//���캯��
{
	this->m_Num = num;
	this->m_Name = name;
	this->m_DepNum = depnum;
}
void Boss::ShowInfo() //��ʾ������Ϣ
{
	cout << "Staff Number:" << this->m_Num << '\v'
		<< "Staff Name:" << this->m_Name << '\v'
		<< "Department Number:" << this->ShowDepName() << '\v'
		<< "The responsibility: Administrate all of the jobs" << endl;
}
string  Boss::ShowDepName() //��ʾ��λ����
{
	return string("Boss");
}