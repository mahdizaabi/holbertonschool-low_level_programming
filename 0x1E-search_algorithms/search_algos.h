#ifndef __SEARCH_ALGO__
#define __SEARCH_ALGO__

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int search(int *a, size_t l, size_t r, int v);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int print(int *array, size_t p_before, size_t step, int value);
#endif

