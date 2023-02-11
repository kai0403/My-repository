#pragma once
#include <iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "This is the constructor of class Person." << endl;
	}
	Person(int Age, int Height)
	{
		age = Age;
		height = new int(Height);
		cout << "This is the constructor with parameter of class Person." << endl;
	}
	Person(const Person& p)
	{
		age = p.age;
		height = new int(*p.height);
		/*height = p.height;*/
		cout << "This is the copy constructor of class Person." << endl;
	}
	~Person()
	{
		if (height != NULL)
		{
			delete(height);
			height = NULL;
		}
		cout << "This is the destructor of class Person." << endl;
	}
public:
	int age;
	int* height;
};

//void Func(Person p);
//Person Func2();
//void Func3();