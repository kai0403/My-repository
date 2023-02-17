//职工抽象类
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Worker
{
public:
	virtual void ShowInfo() = 0;//显示个人信息
	virtual string ShowDepName() = 0;//显示岗位名称
	int m_Num;//职工编号
	string m_Name;//职工姓名
	int m_DepNum;//部门编号
};