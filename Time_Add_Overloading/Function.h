#pragma once
#include <iostream>
using namespace std;
class Time
{
	friend Time operator+(Time& t1, Time& t2);
	friend bool operator<(Time& t1, Time& t2);
public:
	Time(int hours, int minutes)
	{
		this->m_Hours = hours;
		this->m_Minutes = minutes;
		while (this->m_Minutes >= 60)
		{
			this->m_Minutes -= 60;
			this->m_Hours += 1;
		}
	}
	void Show()
	{
		cout << this->m_Hours << " " << this->m_Minutes << endl;
	}
private:
	int m_Hours;
	int m_Minutes;
};

Time operator+(Time& t1, Time& t2);
bool operator<(Time& t1, Time& t2);