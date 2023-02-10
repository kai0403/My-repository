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
	void SetWidth(int Width);
	int FindSmaller()
	{
		return (length < width ? length : width);
	}
	int FindBigger()
	{
		return (length > width ? length : width);
	}
};
bool CanCover(Rectangle r1, Rectangle r2);