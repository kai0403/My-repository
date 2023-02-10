#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
void Rectangle::SetLength(int Length)
{
	length = Length;
}
int Rectangle::GetLength()
{
	return length;
}
void Rectangle::SetWidth(int Width)
{
	width = Width;
}
int Rectangle::GetWidth()
{
	return width;
}
int Rectangle::GetArea()
{
	return length * width;
}
int CmpArea(Rectangle r1, Rectangle r2)
{
	if (r1.GetArea() > r2.GetArea())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}