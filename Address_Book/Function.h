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
void Menu(struct Contact* pc);//�˵�����
void Init(struct Contact* pc);//��ʼ��ͨѶ¼
void Add(struct Contact* pc);//������Ϣ��ͨѶ¼��
void Delete(struct Contact* pc);//ɾ��ͨѶ¼�е���Ϣ
void Modify(struct Contact* pc);//�޸�ͨѶ¼�е���Ϣ
void Search(const struct Contact* pc);//��ͨѶ¼�в�����Ϣ
void Sort(struct Contact* pc);//��ͨѶ¼�е���Ϣ��������
void Show(const struct Contact* pc);//չʾͨ��¼�е���Ϣ
int FindByName(const struct Contact* pc, char name[MAX_NAME]);//Ѱ��ͨѶ¼�ж�Ӧ������

