#pragma once
#include <iostream>
using namespace std;
class Cube
{
public:
	int length;
	int width;
	int height;
	int GetArea()
	{
		return 2 * (length * width + length * height + width * height);
	}
	int GetVolume()
	{
		return length * width * height;
	}
	void SetLength(int x)
	{
		length = x;
	}
	void SetWidth(int y)
	{
		width = y;
	}
	void SetHeight(int z)
	{
		height = z;
	}
};