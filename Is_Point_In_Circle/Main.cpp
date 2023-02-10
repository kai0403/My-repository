#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	int x = 0;
	int y = 0;
	cin >> x;
	cin >> y;
	Point p1;
	p1.SetX(x);
	p1.SetY(y);
	Point p2;
	p2.SetX(5);
	p2.SetY(0);
	Circle c1;
	c1.SetR(5);
	c1.SetCenter(p2);
	int ret = IsPointInCircle(p1, c1);
	if (ret == 1)
	{
		cout << "out" << endl;
	}
	else if (ret == -1)
	{
		cout << "in" << endl;
	}
	else
	{
		cout << "on" << endl;
	}
	return 0;
}