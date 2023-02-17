#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Employee.h"
Employee::Employee(int num, string name, int depnum)//构造函数
{
	this->m_Num = num;
	this->m_Name = name;
	this->m_DepNum = depnum;
}
void Employee::ShowInfo() //显示个人信息
{
	cout << "Staff Number:" << this->m_Num << '\v'
		<< "Staff Name:" << this->m_Name << '\v'
		<< "Department Number:" << this->ShowDepName() << '\v'
		<< "The responsibility: Finish the jobs given by the manager" << endl;
	/*cout << "Staff Number:" << this->m_Num
		<< "\tStaff Name:" << this->m_Name
		<< "\tDepartment Number:" << this->ShowDepName()
		<< "\tThe responsibility: Administrate all of the jobs" << endl;*/
}
string  Employee::ShowDepName() //显示岗位名称
{
	return string("Employee");
}