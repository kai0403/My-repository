#pragma once
#include <iostream>
using namespace std;
class Cube
{
private:
	int length;//��
	int width;//��
	int height;//��
public:
	void SetLength(int Length)//���ó�
	{
		length = Length;
	}
	int GetLength()//��ȡ��
	{
		return length;
	}
	void SetWidth(int Width)//���ÿ�
	{
		width = Width;
	}
	int GetWidth()//��ȡ��
	{
		return width;
	}
	void SetHeight(int Height)//���ø�
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
	int GetHeight()//��ȡ��
	{
		return height;
	}
	int CalArea()//�������
	{
		return 2 * (length * width + length * height + width * height);
	}
	int CalVolume()//�������
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