#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Manager.h"
Manager::Manager(int num, string name, int depnum)//���캯��
{
	this->m_Num = num;
	this->m_Name = name;
	this->m_DepNum = depnum;
}
void Manager::ShowInfo() //��ʾ������Ϣ
{
	cout << "Staff Number:" << this->m_Num << '\v'
		<< "Staff Name:" << this->m_Name << '\v'
		<< "Department Number:" << this->ShowDepName() << '\v'
		<< "The responsibility: Finish the jobs given by the boss, allocate jobs to the employees" << endl;
}
string  Manager::ShowDepName() //��ʾ��λ����
{
	return string("Manager");
}