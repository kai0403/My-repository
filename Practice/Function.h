#pragma once
#include<stdio.h>
#include<string.h>
void Bubble_Order_Int();
void Bubble_Order_Struct();
int cmp_int(void* a, void* b);
int cmp_struct_age(void* a, void* b);
int cmp_struct_name(void* a, void* b);
void Swap(char* a, char* b, int width);