#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
void Menu(struct Contact* pc)
{
	int input = 0;
	do
	{
		printf("Please input your choice:\n");
		printf("1.Add	 2.Delete\n");
		printf("3.Modify 4.Search\n");
		printf("5.Sort	 6.Show\n");
		printf("0:Exit\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Add(pc);
			break;
		case DELETE:
			Delete(pc);
			break;
		case MODIFY:
			Modify(pc);
			break;
		case SEARCH:
			Search(pc);
			break;
		case SORT:
			/*Sort(pc);*/
			break;
		case SHOW:
			Show(pc);
			break;
		case EXIT:
			printf("Exit succeed!\n");
			break;
		default:
			printf("Wrong number, try again!\n");
			break;
		}
	} while (input);
}

void Init(struct Contact* pc)
{
	memset(pc->data, 0, sizeof(pc->data));
	pc->size = 0;
}

void Add(struct Contact* pc)
{
	if (pc->size >= MAX)
	{
		printf("The number is full!\n");
	}
	else
	{
		printf("Please input the name:\n");
		scanf("%s", pc->data[pc->size].name);
		getchar();
		printf("Please input the age:\n");
		scanf("%d", &(pc->data[pc->size].age));
		getchar();
		printf("Please input the sex:\n");
		scanf("%s", pc->data[pc->size].sex);
		getchar();
		printf("Please input the telephone number:\n");
		scanf("%s", pc->data[pc->size].tele);
		getchar();
		printf("Please input the address:\n");
		scanf("%s", pc->data[pc->size].addr);
		pc->size++;
		printf("Add succeed!\n");
	}
}

void Show(const struct Contact* pc)
{
	if (pc->size == 0)//判断通讯录是否为空
	{
		printf("The content is null!\n");
	}
	else
	{
		int i = 0;
		printf("%-6s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");//展示要打印的内容
		for (i = 0; i < pc->size; i++)
		{
			printf("%-6s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].addr
			);
		}
	}
}

void Delete(struct Contact* pc)//删除指定的联系人
{
	char name[MAX_NAME] = { 0 };
	printf("Please input the name:\n");
	scanf("%s", name);
	int ret = FindByName(pc, name);
	if (-1 == ret)//判断名字是否找到
	{
		printf("Name does not exist!\n");
	}
	else//执行删除操作
	{
		int j = 0;
		for (j = ret; j < pc->size - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->size--;
		printf("Delete succeed!\n");
	}
}

int FindByName(const struct Contact* pc, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < pc->size; i++)
	{
		if (0 == strcmp(name, pc->data[i].name))
		{
			return i;
		}
	}
	return -1;
}
void Search(const struct Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("Please input the name:\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Name does not exist!\n");
	}
	else
	{
		printf("%-6s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-6s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}

void Modify(struct Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("Please input the name:\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Name does not exist!\n");
	}
	else
	{
		printf("Please input the new name:\n");
		scanf("%s", pc->data[pos].name);
		getchar();
		printf("Please input the new age:\n");
		scanf("%d", &(pc->data[pos].age));
		getchar();
		printf("Please input the new sex:\n");
		scanf("%s", pc->data[pos].sex);
		getchar();
		printf("Please input the new telephone number:\n");
		scanf("%s", pc->data[pos].tele);
		getchar();
		printf("Please input the new address:\n");
		scanf("%s", pc->data[pos].addr);
		printf("Modify succeed!\n");
	}
}