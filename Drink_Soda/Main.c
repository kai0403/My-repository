#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int empty = 0;//��¼��ƿ��
	int drink = 0;//��¼�ȵ���ˮ��
	int soda = 20;//��ʼ�ܹ���20ƿ��ˮ
	while(soda > 0)
	{
		drink++;//ÿ�κ�һƿ
		soda--;//����һƿ����һƿ
		empty++;//ÿ��һƿ�Ͷ�һ����ƿ
		if (empty == 2)
		{
			soda++;//������ƿ��һƿ��ˮ
			empty = 0;
		}
	}
	printf("%d\n", drink);
	return 0;
}