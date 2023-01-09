#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	char* p = (char*)malloc(sizeof(char) * 20);
	if (p == NULL)
	{
		return 0;
	}
	strcpy(p, "Hello");
	char* q = (char*)realloc(p, sizeof(char) * 20);
	if (q == NULL)
	{
		return 0;
	}
	strcat(q, " World");
	printf("%s\n", q);
	q = NULL;
	free(q);
	p = NULL;
	free(p);
	return 0;
}