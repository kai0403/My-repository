#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
struct Student
{
	char name[20];
	int age;
};
int main()
{
	/*int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	memcpy(arr2, arr1, sizeof(arr1));
	int i = 0;
	for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		printf("%d\n", arr2[i]);
	}*/
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[] = { 1,2,5,4,10,12 };
	/*MyMemmove(arr1, arr1 + 2, 5 * sizeof(int));*/
	/*int i = 0;
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}*/
	/*MyMemmove(arr1, arr1 + 2, 5 * sizeof(int));
	int i = 0;
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}*/
	/*int ret = MyMemcmp(arr1, arr2, 9);
	printf("%d\n", ret);*/
	int arr3[10] = { 0 };
	MyMemset(arr3, 255, sizeof(arr3));
	int i = 0;
	for (i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}