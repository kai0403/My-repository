#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
House::House()//���ӵĹ��캯�����Կ��������ҽ��г�ʼ��
{
	H_LivingRoom = "Living-room";
	H_BedRoom = "Bedroom";
}

GoodGay::GoodGay()//�û��ѵĹ��캯�����Ӷ�����Ϊ������house����ռ�
{
	house = new House;
	assert(house);
}

GoodGay::~GoodGay()//�û��ѵ����������������ͷŴӶ������ٵĿռ�
{
	if (house != NULL)
	{
		delete(house);
		house = NULL;
	}
}

void GoodGay::Visit()//�û���̽�÷���
{
	cout << "Your goodgay is visiting your " << house->H_LivingRoom << endl;
	cout << "Your goodgay is visiting your " << house->H_BedRoom << endl;
}
