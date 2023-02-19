#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#pragma once
#include <iostream>
using namespace std;
template<class T>
class MyArray
{
public:
	MyArray(int capacity)//�вι���
	{
		//cout << "This is the constructor with parameters of my array." << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->paddress = new T[this->m_Capacity];
	}
	MyArray(const MyArray& arr)//���
	{
		//cout << "This is the copy constructor of my array." << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->paddress = new T[arr.m_Capacity];
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
	}
	void Push_Back(const T& val)//β�巨���Ԫ��
	{
		//�ж������С�Ƿ��������
		if (this->m_Capacity == this->m_Size)
		{
			cout << "There is no more space! " << endl;
			return;
		}
		this->paddress[this->m_Size] = val;//�������ݵ�β��
		this->m_Size++;//�����С��һ
	}
	void Pop_Back()//βɾ��ɾ��Ԫ��
	{
		//���û����ʲ������һ��Ԫ��
		if (this->m_Size == 0)
		{
			cout << "The array is empty!" << endl;
			return;
		}
		this->m_Size--;
	}
	//ͨ���±�ķ�ʽ��������Ԫ��
	T& operator[](int index)
	{
		return this->paddress[index];
	}
	//������������
	int GetCapacity()
	{
		return this->m_Capacity;
	}
	//���������С
	int GetSize()
	{
		return this->m_Size;
	}
	MyArray& operator=(const MyArray& arr)//�Ⱥ����ر���ǳ����
	{
		//cout << "This is the overloading of equal sign." << endl;
		if (this->paddress != NULL)//�ж�ԭ���������Ƿ�������
		{
			delete[] this->paddress;
			this->paddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->paddress = new T[arr.m_Capacity];
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
		return *this;
	}
	~MyArray()//����
	{
		if (this->paddress != NULL)
		{
			//cout << "This is the destructor of my array." << endl;
			delete[] this->paddress;
			this->paddress = NULL;
		}
	}
private:
	T* paddress;//ָ��������Ԫ�ؿռ��ָ��
	int m_Capacity;//��������
	int m_Size;//�����С
};

class Person
{
public:
	Person() {};
	Person(string name, int age)
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
	string m_Name;
	int m_Age;
};