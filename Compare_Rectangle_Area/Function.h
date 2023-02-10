#pragma once
#include <iostream>
using namespace std;
class Rectangle
{
private:
	int length;
	int width;
public:
	void SetLength(int Length);
	int GetLength();
	void SetWidth(int Width);
	int GetWidth();
	int GetArea();
};

int CmpArea(Rectangle r1, Rectangle r2);