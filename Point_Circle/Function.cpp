#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"

void Point::SetX(int x)//设置点的横坐标
{
	X = x;
}
int Point::GetX()//获取点的横坐标
{
	return X;
}
void Point::SetY(int y)//设置点的纵坐标
{
	Y = y;
}
int Point::GetY()//获取点的纵坐标
{
	return Y;
}

void Circle::SetR(int r)//设置圆的半径
{
	R = r;
}
int Circle::GetR()//获取圆的半径
{
	return R;
}
void Circle::SetCenter(Point center)//设置圆心坐标
{
	Center = center;
}
Point Circle::GetCenter()//获取圆心坐标
{
	return Center;
}

int IsInCircle(Point& p, Circle& c)//找出点和圆的关系
{
	if (sqrt(pow(p.GetX() - c.GetCenter().GetX(), 2) + pow(p.GetY() - c.GetCenter().GetY(), 2)) > c.GetR())//点在圆外
	{
		return 1;
	}
	else if (sqrt(pow(p.GetX() - c.GetCenter().GetX(), 2) + pow(p.GetY() - c.GetCenter().GetY(), 2)) < c.GetR())//点在圆内
	{
		return -1;
	}
	else//点在圆上
	{
		return 0;
	}
}