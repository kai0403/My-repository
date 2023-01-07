#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
void WhichDay()
{
	char ch = getchar();
	switch (ch)
	{
	case 'M':
		printf("Monday\n");
		break;
	case 'W':
		printf("Wednesday\n");
		break;
	case 'F':
		printf("Friday\n");
		break;
	case 'T':
	{
		getchar();
		char c = getchar();
		switch (c)
		{
		case 'u':
			printf("Tuesday\n");
			break;
		case 'h':
			printf("Thursday\n");
			break;
		}
	}
	break;
	case 'S':
	{
		getchar();
		char c2 = getchar();
		switch (c2)
		{
		case 'a':
			printf("Saturday\n");
			break;
		case 'u':
			printf("Sunday\n");
			break;
		}
	}
	break;
	}
}