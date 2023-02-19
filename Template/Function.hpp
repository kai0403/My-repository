#pragma once
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
template<class T1, class T2>
class Person;

template<class T1, class T2>
void PrintPerson(Person<T1, T2>p)
{
	p.ShowPerson();
}

template<class T1, class T2>
class Person
{
	friend void PrintPerson<>(Person<T1, T2>p);
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void ShowPerson()
	{
		cout << "Name: " << this->m_Name << endl;
		cout << "Age: " << this->m_Age << endl;
	}
private:
	T1 m_Name;
	T2 m_Age;
};
