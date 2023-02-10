#pragma once
#include <iostream>
using namespace std;
class Cube
{
private:
	int length;//长
	int width;//宽
	int height;//高
public:
	void SetLength(int Length)//设置长
	{
		length = Length;
	}
	int GetLength()//获取长
	{
		return length;
	}
	void SetWidth(int Width)//设置宽
	{
		width = Width;
	}
	int GetWidth()//获取宽
	{
		return width;
	}
	void SetHeight(int Height)//设置高
	{
		height = Height;
	}
	void BubbleSort()
	{
		int largest = (length > width ? length : width) > height ? (length > width ? length : width) : height;
		int smallest = (length < width ? length : width) < height ? (length < width ? length : width) : height;
		int middle = length + width + height - largest - smallest;
		length = largest;
		width = middle;
		height = smallest;
	
	}
	int GetHeight()//获取长
	{
		return height;
	}
	int CalArea()//计算面积
	{
		return 2 * (length * width + length * height + width * height);
	}
	int CalVolume()//计算体积
	{
		return length * width * height;
	}
	bool IsSameByClass(Cube& c)
	{
		if (length == c.GetLength() && width == c.GetWidth() && height == c.GetHeight())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

bool IsSame(Cube& c1, Cube& c2);