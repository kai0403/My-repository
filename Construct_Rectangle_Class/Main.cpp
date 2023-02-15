#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main() 
{
	int x, y, z;
	cin >> x >> y >> z;
	cuboid a(x, y, z);
	cout << a.rectangle::area() << '\n' << a.area();
	return 0;
}