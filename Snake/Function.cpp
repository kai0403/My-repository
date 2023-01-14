#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
#define SNAKE_NUM 500
struct Snake//蛇的结构
{
	int size;//蛇的长度
	int dir;//蛇的方向
	int speed;//蛇的速度
	POINT coor[SNAKE_NUM];//蛇的坐标
}snake;

void InterfaceInit()
{
	initgraph(640, 480);//设置界面尺寸
	setbkcolor(BLUE);//设置背景颜色
	cleardevice();//将背景色换成已设置的颜色
	solidcircle(snake.coor[0].x, snake.coor[0].y, 5);
	system("pause");
}

void GameInit()//数据初始化
{
	snake.size = 0;
	snake.speed = 5;
	snake.dir;
	snake.coor[0].x = 5;
	snake.coor[0].y = 5;//对蛇的数据进行初始化
}