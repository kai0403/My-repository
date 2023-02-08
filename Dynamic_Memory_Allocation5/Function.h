#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
struct S
{
	int n;
	int arr[];//柔型数组成员，数组大小可变
};

struct S2
{
	int n;
	int* parr;
};