#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
enum Week
{
	Sunday = 1,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
};
int main()
{
	enum Week Today = Sunday, Tomorrow = Monday;
	printf("%d, %d\n", Today, Tomorrow);
	return 0;
}