#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
House::House()//房子的构造函数，对客厅和卧室进行初始化
{
	H_LivingRoom = "Living-room";
	H_BedRoom = "Bedroom";
}

GoodGay::GoodGay()//好基友的构造函数，从堆区中为其属性house分配空间
{
	house = new House;
	assert(house);
}

GoodGay::~GoodGay()//好基友的析构函数，用来释放从堆区开辟的空间
{
	if (house != NULL)
	{
		delete(house);
		house = NULL;
	}
}

void GoodGay::Visit()//好基友探访房子
{
	cout << "Your goodgay is visiting your " << house->H_LivingRoom << endl;
	cout << "Your goodgay is visiting your " << house->H_BedRoom << endl;
}
