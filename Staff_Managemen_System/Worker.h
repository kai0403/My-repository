//ְ��������
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Worker
{
public:
	virtual void ShowInfo() = 0;//��ʾ������Ϣ
	virtual string ShowDepName() = 0;//��ʾ��λ����
	int m_Num;//ְ�����
	string m_Name;//ְ������
	int m_DepNum;//���ű��
};