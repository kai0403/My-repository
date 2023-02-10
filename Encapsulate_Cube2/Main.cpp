#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	Cube c1;
	c1.SetLength(3);
	c1.SetWidth(4);
	c1.SetHeight(5);
	c1.BubbleSort();
	/*cout << "表面积: " << c1.CalArea() << endl;
	cout << "体积: " << c1.CalVolume() << endl;*/
	Cube c2;
	c2.SetLength(6);
	c2.SetWidth(4);
	c2.SetHeight(3);
	c2.BubbleSort();
	/*bool ret = IsSame(c1, c2);
	if (ret)
	{
		cout << "These two cubes are the same." << endl;
	}
	else
	{
		cout << "These two cubes are not the same." << endl;
	}*/
	bool ret = c1.IsSameByClass(c2);
	if (ret)
	{
		cout << "These two cubes are the same." << endl;
	}
	else
	{
		cout << "These two cubes are not the same." << endl;
	}
	return 0;
}