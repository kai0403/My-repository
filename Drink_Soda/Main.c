#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int empty = 0;//记录空瓶数
	int drink = 0;//记录喝的汽水数
	int soda = 20;//开始总共是20瓶汽水
	while(soda > 0)
	{
		drink++;//每次喝一瓶
		soda--;//喝完一瓶就少一瓶
		empty++;//每喝一瓶就多一个空瓶
		if (empty == 2)
		{
			soda++;//两个空瓶换一瓶汽水
			empty = 0;
		}
	}
	printf("%d\n", drink);
	return 0;
}