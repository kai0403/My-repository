#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int peo[10] = { 0 };
	int i = 0;
	int index = 0;
	int count = 8;
	int num = 0;
	for (i = 0; i < 10 ; i++)
	{
		peo[i] = 1;//����ֵ�������˶�����
	}
	while (count > 0)
	{
		index++;
		num++;
		if (index > 8)
		{
			index = 1;//ѭ����һ�ܣ�������¿�ʼ����
		}
		while (peo[index] == 0)
		{
			index++;//�����index�������ˣ�ֱ������
			if (index > 8)
			{
				index = 1;//ѭ����һ�ܣ�������¿�ʼ����
			}
		}
		if (num == 3)
		{
			count--;
			num = 0;
			peo[index] = 0;
			printf("%-4d", index);
		}
	}
	return 0;
}