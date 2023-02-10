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
	int R;
	Point Center;

public:
	void SetR(int r);
	int GetR();
	void SetCenter(Point center);
	Point GetCenter();
};

int IsInCircle(Point& p, Circle& c);