#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
void Point::SetX(int x)
{
	X = x;
}
int Point::GetX()
{
	return X;
}
void Point::SetY(int y)
{
	Y = y;
}
int Point::GetY()
{
	return Y;
}
void Circle::SetR(int r)
{
	radius = r;
}
int Circle::GetR()
{
	return radius;
}
void Circle::SetCenter(Point& center)
{
	Center = center;
}
Point Circle::GetCenter()
{
	return Center;
}

int IsPointInCircle(Point& p, Circle& c)
{
	if (sqrt(pow(c.GetCenter().GetX() - p.GetX(), 2) + pow(p.GetY() - c.GetCenter().GetY(), 2)) > c.GetR())
	{
		return 1;
	}
	else if (sqrt(pow(c.GetCenter().GetX() - p.GetX(), 2) + pow(p.GetY() - c.GetCenter().GetY(), 2)) < c.GetR())
	{
		return -1;
	}
	else
	{
		return 0;
	}
}