#pragma once
#include <stdio.h>
#include <string.h>
#include <assert.h>
void* MyMemcpy(void* dest, const void* src, size_t n);
void* MyMemmove(void* dest, const void* src, size_t n);
int MyMemcmp(const void* str1, const void* str2, size_t n);
void* MyMemset(void* s, int c, size_t n);