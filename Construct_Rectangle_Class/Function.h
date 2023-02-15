#pragma once
#include <iostream>
using namespace std;
class rectangle {
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
	int area() 
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
	int area()
	{
		return rectangle::getlength() * rectangle::getwidth() * 2 + rectangle::getlength() * height * 2 + rectangle::getwidth() * height * 2;
	}
};