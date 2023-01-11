#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int i = 0;
	char* mid = NULL;
	char* str[] = { "be", "trust", "love" };
	char* max = (strcmp(((strcmp(str[0], str[1]) > 0) ? str[0] : str[1]), str[2]) > 0 ? ((strcmp(str[0], str[1]) > 0) ? str[0] : str[1]) : str[2]);
	char* min = (strcmp(((strcmp(str[0], str[1]) < 0) ? str[0] : str[1]), str[2]) < 0 ? ((strcmp(str[0], str[1]) < 0) ? str[0] : str[1]) : str[2]);
	for (i = 0; i < 3; i++)
	{
		if (str[i] != max && str[i] != min)
		{
			mid = str[i];
		}
	}
	printf("%s\n", max);
	printf("%s\n", mid);
	printf("%s\n", min);
	return 0;
}