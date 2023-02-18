#pragma once
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <windows.h>
#include <assert.h>
#include <stddef.h>
//#define STR "hello world"
//#define INT int
//#define MAX 100
//#define SQUARE(X) (X) * (X)
//#define PRINT(X) printf("The value of " #X " is %d\n", X)
//#define CAT(X, Y) X##Y
//int Add(int a, int b);
//void Print(int num);
//#define MAX(X, Y) (X)>(Y)?(X):(Y)
#define MAX(X, Y) (X)>(Y)?(X):(Y)
#define DEBUG 0
#define SIZEOF(TYPE) sizeof(TYPE)
#define MALLOC(num, type) (type*)malloc(num * sizeof(type))
#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)
struct S
{
	char c1;
	int num;
	char c2;
};