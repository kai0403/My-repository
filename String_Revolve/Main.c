#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	//char str[] = "abcdef";
	///*StrRevolve(str, 3);*/
	//Left_Revolve(str, 10);
	//printf("%s\n", str);
	char str1[] = "abcdef";
	char str2[] = "cdefb";
	if (Is_Left_Move(str1, str2) == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}