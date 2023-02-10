#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
bool IsSame(Cube& c1, Cube& c2)
{
	if (c1.GetLength() == c2.GetLength() && c1.GetWidth() == c2.GetWidth() && c1.GetHeight() == c2.GetHeight())
	{
		return true;
	}
	else
	{
		return false;
	}
}