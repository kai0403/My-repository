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
	//第一台电脑零件
	CPU* cpu = new IntelCPU;
	VideoCard* videocard = new IntelVideoCard;
	Memory* memory = new IntelMemory;
	//第一台电脑
	Computer* computer1 = new Computer(cpu, videocard, memory);
	computer1->DoWork();
	delete(computer1);
	cout << endl;
	//第二台电脑
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->DoWork();
	delete(computer2);
	cout << endl;
	//第三台电脑
	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer3->DoWork();
	delete(computer3);
}