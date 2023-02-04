#pragma once
#include <stdio.h>
#include <string.h>
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 100
#define MAX 1000
enum Option
{
	EXIT,
	ADD,
	DELETE,
	MODIFY,
	SEARCH,
	SORT,
	SHOW
};
struct PeoInf
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

struct Contact
{
	struct PeoInf data[MAX];
	int size;
};
void Menu(struct Contact* pc);//菜单函数
void Init(struct Contact* pc);//初始化通讯录
void Add(struct Contact* pc);//增加信息到通讯录中
void Delete(struct Contact* pc);//删除通讯录中的信息
void Modify(struct Contact* pc);//修改通讯录中的信息
void Search(const struct Contact* pc);//在通讯录中查找信息
void Sort(struct Contact* pc);//对通讯录中的信息进行排序
void Show(const struct Contact* pc);//展示通信录中的信息
int FindByName(const struct Contact* pc, char name[MAX_NAME]);//寻找通讯录中对应的名字

