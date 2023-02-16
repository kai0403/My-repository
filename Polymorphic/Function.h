#pragma once
#include <iostream>
#include <string>
using namespace std;
//class Animal
//{
//public:
//	virtual void Speak()
//	{
//		cout << "The animal is speaking." << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	void Speak()
//	{
//		cout << "The cat is speaking." << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	void Speak()
//	{
//		cout << "The dog is speaking." << endl;
//	}
//};
//
//void DoSpeak(Animal& animal);

//class Calculator
//{
//public:
//	virtual int GetResult()
//	{
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//};
//
//class Add : public Calculator
//{
//	int GetResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
//class Subtract : public Calculator
//{
//	int GetResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
//class Multiple : public Calculator
//{
//	int GetResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//class Divide : public Calculator
//{
//	int GetResult()
//	{
//		return m_Num1 / m_Num2;
//	}
//};
//
//class Father
//{
//public:
//	virtual void Func() = 0;
//};
//
//class Son : public Father
//{
//public:
//	void Func() {};
//};
//class MakeDrink
//{
//public:
//	virtual void Boil() = 0;
//	virtual void Brew() = 0;
//	virtual void PourInCup() = 0;
//	virtual void PutIntoSth() = 0;
//	void DoWork()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutIntoSth();
//	}
//};

//class Coffee : public MakeDrink
//{
//public:
//	void Boil()
//	{
//		cout << "Boil the NoFu Spring." << endl;
//	}
//	void Brew()
//	{
//		cout << "Brew the Cappuccino." << endl;
//	}
//	void PourInCup()
//	{
//		cout << "Pour the coffee in the cup." << endl;
//	}
//	void PutIntoSth()
//	{
//		cout << "Add some sugar and milk into the coffee." << endl;
//	}
//};
//
//class Tea : public MakeDrink
//{
//public:
//	void Boil()
//	{
//		cout << "Boil the Baisui Mountain." << endl;
//	}
//	void Brew()
//	{
//		cout << "Brew the TieGuanyin." << endl;
//	}
//	void PourInCup()
//	{
//		cout << "Pour the tea in the cup." << endl;
//	}
//	void PutIntoSth()
//	{
//		cout << "Add some Chinese wolfberry into the tea." << endl;
//	}
//};
//
//void Test(MakeDrink* makedrink);

//class Animal
//{
//public:
//	virtual void Speak() = 0;
//	Animal()//Animal�Ĺ��캯��
//	{
//		cout << "This is the constructor of class Animal." << endl;
//	}
//	virtual ~Animal() = 0;//Animal����������
//};
//
//class Cat : public Animal
//{
//public:
//	Cat(string name)
//	{
//		this->m_Name = new string(name);
//		cout << "This is the constructor of class Cat." << endl;
//	}
//	~Cat()
//	{
//		if (this->m_Name != NULL)
//		{
//			delete(this->m_Name);
//			this->m_Name = NULL;
//		}
//		cout << "This is the destructor of class Cat." << endl;
//	}
//	void Speak()
//	{
//		cout << "Cat " << *(this->m_Name) << " is speaking." << endl;
//	}
//private:
//	string* m_Name;
//};
//
//void Test();



class CPU//����CPU��
{
public:
	virtual void Calculate() = 0;//������㺯��
};

class VideoCard//�����Կ���
{
public:
	virtual void Show() = 0;//������ʾ����
};

class Memory//�����ڴ�����
{
public:
	virtual void Storage() = 0;//����洢����
};

class Computer//����������
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		this->m_cpu = cpu;
		this->m_vc = vc;
		this->m_mem = mem;
	}
	void DoWork()
	{
		m_cpu->Calculate();//CPU����
		m_vc->Show();//�Կ�����
		m_mem->Storage();//�ڴ�������
	}
	~Computer()//���Ե���������
	{
		if (this->m_cpu != NULL)
		{
			delete(m_cpu);
			m_cpu = NULL;
		}
		if (this->m_vc != NULL)
		{
			delete(m_vc);
			m_vc = NULL;
		}
		if (this->m_mem != NULL)
		{
			delete(m_mem);
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;//CPUָ��
	VideoCard* m_vc;//�Կ�ָ��
	Memory* m_mem;//�ڴ���ָ��
};

//Intel����
class IntelCPU : public CPU//Intel��CPU
{
	void Calculate()
	{
		cout << "The CPU of Intel is gonna go to work!" << endl;
	}
};

class IntelVideoCard : public VideoCard//Intel���Կ�
{
	void Show()
	{
		cout << "The VideoCard of Intel is gonna go to work!" << endl;
	}
};

class IntelMemory : public Memory//Intel���ڴ���
{
	void Storage()
	{
		cout << "The Memory of Intel is gonna go to work!" << endl;
	}
};

//Lenovo����
class LenovoCPU : public CPU//Lenovo��CPU
{
	void Calculate()
	{
		cout << "The CPU of Lenovo is gonna go to work!" << endl;
	}
};

class LenovoVideoCard : public VideoCard//Lenovo���Կ�
{
	void Show()
	{
		cout << "The VideoCard of Lenovo is gonna go to work!" << endl;
	}
};

class LenovoMemory : public Memory//Lenovo���ڴ���
{
	void Storage()
	{
		cout << "The Memory of Lenovo is gonna go to work!" << endl;
	}
};

void Test();
