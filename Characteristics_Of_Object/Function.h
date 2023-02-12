#pragma once
#include <iostream>
using namespace std;
class Person
{
public:
	void ShowClassName()
	{
		cout << "This is class Person." << endl;
	}
	void SetAge() const
	{
		if (this == NULL)
		{
			return;
		}
		p_age = 100;
		cout << p_age << endl;
		/*this = NULL;*/
	}
public:
	mutable int p_age;
	int p_num;
};