#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	char str[] = "i AM A STUDENT";
	char* str1 = str;
	while (*str1)
	{
		if (islower(*str1))
		{
			*str1 = toupper(*str1);
		}
		else if (isupper(*str1))
		{
			*str1 = tolower(*str1);
		}
		str1++;
	}
	printf("%s\n", str);
	return 0;
}