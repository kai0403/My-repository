#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
void MyPrint(int val);

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string GetName()
	{
		return this->m_Name;
	}
	int GetAge()
	{
		return this->m_Age;
	}
private:
	string m_Name;
	int m_Age;
};