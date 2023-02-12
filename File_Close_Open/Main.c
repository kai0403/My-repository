#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	else
	{
		printf("%c\n", fgetc(pf));
		printf("%c\n", fgetc(pf));
		printf("%c\n", fgetc(pf));
		fclose(pf);
		pf = NULL;
	}
	char ch = fgetc(stdin);
	fputc(ch, stdout);
	return 0;
}