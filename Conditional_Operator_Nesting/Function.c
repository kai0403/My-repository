#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
char Judge(int score)
{
	return (score >= 90) ? 'A' : ((score >= 60) ? 'B' : 'C');
}