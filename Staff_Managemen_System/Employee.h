//Ա����
#pragma once
#include <iostream>
#include <string>
#include "Worker.h"
using namespace std;
class Employee : public Worker
{
public:
	Employee(int num, string name, int depnum);//���캯��
	virtual void ShowInfo();//��ʾ������Ϣ
	virtual string ShowDepName();//��ʾ��λ����
};