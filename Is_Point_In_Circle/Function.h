#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
	int X;
	int Y;
public:
	void SetX(int x);
	int GetX();
	void SetY(int y);
	int GetY();
};
class Circle
{
private:
	Point Center;
	int radius;
public:
	void SetR(int r);
	int GetR();
	void SetCenter(Point& center);
	Point GetCenter();
};

int IsPointInCircle(Point& c, Circle& p);