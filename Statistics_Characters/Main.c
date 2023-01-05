#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int characters = 0;
	int numbers = 0;
	int spaces = 0;
	int others = 0;
	char ch = 0;
	printf("Please input a string:\n");
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
		{
			characters++;
		}
		else if (ch >= '0' && ch <= '9')
		{
			numbers++;
		}
		else if (ch == ' ')
		{
			spaces++;
		}
		else
		{
			others++;
		}
	}
	printf("The number of characters is %d\n", characters);
	printf("The number of numbers is %d\n", numbers);
	printf("The number of spaces is %d\n", spaces);
	printf("The number of others is %d\n", others);
	return 0;
}