#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
//void DoSpeak(Animal& animal)
//{
//	animal.Speak();
//}
//
//void Test(MakeDrink* makedrink)
//{
//	makedrink->DoWork();
//	delete(makedrink);
//}
//void Test()
//{
//	Animal* animal = new Cat("Tom");
//	animal->Speak();
//	delete(animal);
//	animal = NULL;
//}
//
//Animal::~Animal()
//{
//	cout << "This is the destructor of class Animal." << endl;
//}

void Test()
{
	//��һ̨�������
	CPU* cpu = new IntelCPU;
	VideoCard* videocard = new IntelVideoCard;
	Memory* memory = new IntelMemory;
	//��һ̨����
	Computer* computer1 = new Computer(cpu, videocard, memory);
	computer1->DoWork();
	delete(computer1);
	cout << endl;
	//�ڶ�̨����
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->DoWork();
	delete(computer2);
	cout << endl;
	//����̨����
	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer3->DoWork();
	delete(computer3);
}