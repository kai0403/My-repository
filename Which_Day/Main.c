#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int sum = 0;
	printf("Please input the day:year,month,day\n");
	scanf("%d,%d,%d", &year, &month, &day);
	switch (month)
	{
	case 1:
		break;
	case 2:
		sum += 31;
		break;
	case 3:
		sum += 60;
		break;
	case 4:
		sum += 91;
		break;
	case 5:
		sum += 121;
		break;
	case 6:
		sum += 152;
		break;
	case 7:
		sum += 182;
		break;
	case 8:
		sum += 213;
		break;
	case 9:
		sum += 244;
		break;
	case 10:
		sum += 274;
		break;
	case 11:
		sum += 305;
		break;
	default:
		sum += 335;
		break;
	}
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		NULL;
	}
	else
	{
		if (month >= 3)
		{
			sum -= 1;
		}
	}
	printf("%d\n", sum + day);
	return 0;
}