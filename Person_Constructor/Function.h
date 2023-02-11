#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
	int age;
	string name;
public:
	Person(int Age, string Name)
	{
		age = Age;
		name = Name;
	}
	void ShowPerson()
	{
		cout << name << " " << age << endl;
	}
};