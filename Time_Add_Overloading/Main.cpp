#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	Time t2(6, 6);
	int hours = 0;
	int minutes = 0;
	cin >> hours;
	cin >> minutes;
	Time t1(hours, minutes);
	bool ret = t1 < t2;
	if (ret == 1)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	/*Time t3 = t1 + t2;*/
	return 0;
}