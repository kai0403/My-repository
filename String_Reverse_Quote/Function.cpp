#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
void StrReverse(string& s)
{
	int len = size(s);
	for (int i = 0; i < len / 2; i++)
	{
		char temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}