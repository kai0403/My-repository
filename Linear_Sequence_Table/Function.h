#pragma once
#include <stdio.h>
#define LENGTH_OF_NAME 20
typedef struct
{
	float coefficient;
	int index;
}Polynomial;

typedef struct
{
	Polynomial* elem;
	int length;
}Sqlist;

typedef struct
{
	int num;
	char name[LENGTH_OF_NAME];
	float price;
}Book;

typedef struct
{
	Book* elem;
	int length;
}Sqlist2;