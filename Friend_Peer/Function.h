#pragma once
#include <iostream>
#include <cassert>
#include <string>
using namespace std;

class House;

class GoodGay
{
public:
	GoodGay();
	~GoodGay();
	void Visit();
private:
	House* house;//�û��ѵ�˽������-ָ���ӵ�ָ��
};

class House
{
	friend void GoodGay::Visit();
public:
	House();
public:
	string H_LivingRoom;//���ӵĹ�������-����
private:
	string H_BedRoom;//���ӵ�˽������-����
};

