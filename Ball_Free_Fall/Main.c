#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int fre = 0;
	float dis = 0;
	printf("Please input the frequency:\n");
	scanf("%d", &fre);
	dis = SumDistance(fre);
	printf("The total distance is %f\n", dis);
	return 0;
}