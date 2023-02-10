#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"

void Point::SetX(int x)//���õ�ĺ�����
{
	X = x;
}
int Point::GetX()//��ȡ��ĺ�����
{
	return X;
}
void Point::SetY(int y)//���õ��������
{
	Y = y;
}
int Point::GetY()//��ȡ���������
{
	return Y;
}

void Circle::SetR(int r)//����Բ�İ뾶
{
	R = r;
}
int Circle::GetR()//��ȡԲ�İ뾶
{
	return R;
}
void Circle::SetCenter(Point center)//����Բ������
{
	Center = center;
}
Point Circle::GetCenter()//��ȡԲ������
{
	return Center;
}

int IsInCircle(Point& p, Circle& c)//�ҳ����Բ�Ĺ�ϵ
{
	if (sqrt(pow(p.GetX() - c.GetCenter().GetX(), 2) + pow(p.GetY() - c.GetCenter().GetY(), 2)) > c.GetR())//����Բ��
	{
		return 1;
	}
	else if (sqrt(pow(p.GetX() - c.GetCenter().GetX(), 2) + pow(p.GetY() - c.GetCenter().GetY(), 2)) < c.GetR())//����Բ��
	{
		return -1;
	}
	else//����Բ��
	{
		return 0;
	}
}