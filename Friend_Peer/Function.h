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
	House* house;//好基友的私有属性-指向房子的指针
};

class House
{
	friend void GoodGay::Visit();
public:
	House();
public:
	string H_LivingRoom;//房子的公共属性-客厅
private:
	string H_BedRoom;//房子的私有属性-卧室
};

