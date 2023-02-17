//经理类
#pragma once
#include <iostream>
#include <string>
#include "Worker.h"
using namespace std;
class Manager : public Worker
{
public:
	Manager(int num, string name, int depnum);//构造函数
	virtual void ShowInfo();//显示个人信息
	virtual string ShowDepName();//显示岗位名称
};