#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int i = 0;
	char str[] = "Trust yourself";
	for (i = 0; i <= strlen(str) / 2 - 1; i++)
	{
		char temp = str[i];
		str[i] = str[strlen(str) - 1 - i];
		str[strlen(str) - 1 - i] = temp;
	}
	printf("%s\n", str);
	return 0;
}