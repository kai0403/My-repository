#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
#define SNAKE_NUM 500
struct Snake//�ߵĽṹ
{
	int size;//�ߵĳ���
	int dir;//�ߵķ���
	int speed;//�ߵ��ٶ�
	POINT coor[SNAKE_NUM];//�ߵ�����
}snake;

void InterfaceInit()
{
	initgraph(640, 480);//���ý���ߴ�
	setbkcolor(BLUE);//���ñ�����ɫ
	cleardevice();//������ɫ���������õ���ɫ
	solidcircle(snake.coor[0].x, snake.coor[0].y, 5);
	system("pause");
}

void GameInit()//���ݳ�ʼ��
{
	snake.size = 0;
	snake.speed = 5;
	snake.dir;
	snake.coor[0].x = 5;
	snake.coor[0].y = 5;//���ߵ����ݽ��г�ʼ��
}