#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	int length1 = 0;
	int width1 = 0;
	int length2 = 0;
	int width2 = 0;
	cin >> length1 >> width1 >> length2 >> width2;
	Rectangle r1;
	r1.SetLength(length1);
	r1.SetWidth(width1);
	Rectangle r2;
	r2.SetLength(length2);
	r2.SetWidth(width2);
	bool ret = CanCover(r1, r2);
	if (ret)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	return 0;
}