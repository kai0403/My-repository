//������
#pragma once
#include <iostream>
#include <string>
#include "Worker.h"
using namespace std;
class Manager : public Worker
{
public:
	Manager(int num, string name, int depnum);//���캯��
	virtual void ShowInfo();//��ʾ������Ϣ
	virtual string ShowDepName();//��ʾ��λ����
};