#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
void Rectangle::SetLength(int Length)
{
	length = Length;
}
void Rectangle::SetWidth(int Width)
{
	width = Width;
}
bool CanCover(Rectangle r1, Rectangle r2)
{
	if (r1.FindSmaller() >= r2.FindSmaller() && r1.FindBigger() >= r2.FindBigger())
	{
		return true;
	}
	else
	{
		return false;
	}
}