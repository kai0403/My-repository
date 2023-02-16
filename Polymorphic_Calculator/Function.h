#pragma once
#include <iostream>
using namespace std;
//class BaseCalculator 
//{
//public:
//    int m_A;
//    int m_B;
//    virtual int getResult() = 0;
//};
//
//// 加法计算器类
//class AddCalculator : public BaseCalculator 
//{
//    int getResult()
//    {
//        return m_A + m_B;
//    }
//};
//
//// 减法计算器类
//class SubCalculator : public BaseCalculator 
//{
//    int getResult()
//    {
//        return m_A - m_B;
//    }
//};

class rectangle 
{
private:
	int length, width;
public:
	rectangle(int x, int y) 
	{
		length = x;
		width = y;
	}
	void set(int x, int y) 
	{
		length = x;
		width = y;
	}
	int getlength() 
	{
		return length;
	}
	int getwidth() 
	{
		return width;
	}
	virtual int getval()
	{
		return length * width;
	}

};
class cuboid :public rectangle 
{
private:
	int height;
public:
	cuboid(int x, int y, int z) :rectangle(x, y) 
	{
		height = z;
	}
	int getval()
	{
		return rectangle::getlength() * rectangle::getwidth() * height;
	}
};