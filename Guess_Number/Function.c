#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
void Menu()
{
	int input = 0;
	do
	{
		printf("Please input your choice:\n");
		printf("1. Play	0.Exit\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("Exit succeed!\n");
			break;
		default:
			printf("Wrong number, input again!\n");
			break;
		}
	} while (input);
}

void Game()
{
	int answer = rand() % 100 + 1;
	int guess = 0;
	printf("Please input the number you guess from one to one hundred:\n");
	scanf("%d", &guess);
	while (1)
	{
		if (guess > answer)
		{
			printf("Too big!\n");
			scanf("%d", &guess);
		}
		else if (guess < answer)
		{
			printf("Too small!\n");
			scanf("%d", &guess);
		}
		else
		{
			printf("Right!\n");
			break;
		}
	}
}