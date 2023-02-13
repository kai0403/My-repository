#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
Time operator+(Time& t1, Time& t2)
{
	Time temp(t1.m_Hours + t2.m_Hours, t1.m_Minutes + t2.m_Minutes);
	return temp;
}

bool operator<(Time& t1, Time& t2)
{
	if (t1.m_Hours * 60 + t1.m_Minutes < t2.m_Hours * 60 + t2.m_Minutes)
	{
		return true;
	}
	else
	{
		return false;
	}
}