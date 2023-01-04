#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int profit = 0;
	int bonus = 0;
	int bonus1 = 100000 * 0.1;
	int bonus2 = bonus1 + 100000 * 0.075;
	int bonus3 = bonus2 + 200000 * 0.05;
	int bonus4 = bonus3 + 200000 * 0.03;
	int bonus5 = bonus4 + 400000 * 0.015;
	printf("Please input the profit:\n");
	scanf("%d", &profit);
	if (profit <= 100000)
	{
		bonus = profit * 0.1;
	}
	else if (profit <= 200000)
	{
		bonus = bonus1 + (profit - 100000) * 0.075;
	}
	else if (profit <= 400000)
	{
		bonus = bonus2 + (profit - 200000) * 0.05;
	}
	else if (profit <= 600000)
	{
		bonus = bonus3 + (profit - 400000) * 0.03;
	}
	else if (profit <= 1000000)
	{
		bonus = bonus4 + (profit - 600000) * 0.015;
	}
	else
	{
		bonus = bonus5 + (profit - 1000000) * 0.01;
	}
	printf("Profit is %d\n", profit);
	printf("Bonus is %d\n", bonus);
	return 0;
}