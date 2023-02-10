#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	Point p1;
	p1.SetX(5);
	p1.SetY(0);
	/*cout << p1.GetX() << endl;
	cout << p1.GetY() << endl;*/
	Point center;
	center.SetX(0);
	center.SetY(0);
	/*cout << center.GetX() << endl;
	cout << center.GetY() << endl;*/
	Circle c1;
	c1.SetR(7);
	c1.SetCenter(center);
	/*cout << c1.GetR() << endl;
	cout << c1.GetCenter().GetX() << endl;
	cout << c1.GetCenter().GetY() << endl;*/
	int ret = IsInCircle(p1, c1);
	if (ret == 1)
	{
		cout << "The point outside the circle. " << endl;
	}
	else if (ret == -1)
	{
		cout << "The point inside the circle. " << endl;
	}
	else
	{
		cout << "The point is on the circle. " << endl;
	}
	return 0;
}