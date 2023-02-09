#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	int length = 0;
	int width = 0;
	int height = 0;
	cin >> length;
	cin >> width;
	cin >> height;
	Cube c;
	c.SetLength(length);
	c.SetWidth(width);
	c.SetHeight(height);
	cout << c.length << " "
		<< c.width << " "
		<< c.height << " "
		<< c.GetArea() << " "
		<< c.GetVolume() << endl;
	return 0;
}