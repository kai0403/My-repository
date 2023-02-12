#pragma once
#include <iostream>
using namespace std;
class Person
{
//private:
//	static int A;
//	int a;
////public:
//	 void Func()
//	{
//		A = 200;
//		/*a = 1000;*/
//		cout << "This is the static member function of class Person." << endl;
//	}
public:
	int age;
	Person(int age)
	{
		this->age = age;
	}
	Person& AddAge(Person& p)
	{
		this->age += p.age;
		return *this;
	}
};
