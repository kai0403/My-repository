#pragma once
#include <iostream>
#include <string>
using namespace std;
class Phone
{
public:
	string brand;
	Phone(string Brand) :brand(Brand)
	{
		cout << "This is the constructor of class Phone." << endl;
	}
	~Phone()
	{
		cout << "This is the destructor of class Phone." << endl;
	}
};
class Person
{
public:
	string name;
	Phone phone;
	Person(string Name, Phone p1) :name(Name), phone(p1)
	{
		cout << "This is the constructor of class Person." << endl;
	}
	~Person()
	{
		cout << "This is the destructor of class Person." << endl;
	}
};