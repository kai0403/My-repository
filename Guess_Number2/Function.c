#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
void Interface()
{
	srand((unsigned int)time(NULL));
	int input = 1;
	while (input)
	{
		printf("Please input your choice:\n");
		printf("1.Play	0.Exit\n");
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
			printf("Wrong number, try again!\n");
			break;
		}
	}
}

void Game()
{
	int num = 0;
	int guess = rand() % 100 + 1;
	int count = 0;
	while (1)
	{
		if (count >= 10)
		{
			printf("You failed!\n");
			break;
		}
		printf("Please guess a number:\n");
		scanf("%d", &num);
		if (num > guess)
		{
			printf("Too big!\n");
			count++;
		}
		else if (num < guess)
		{
			printf("Too small!\n");
			count++;
		}
		else
		{
			count++;
			printf("Right!\n");
			break;
		}
	}
	printf("Count = %d\n", count);
}