#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * search - search a value in an array
 * @a: pointer to the first element of the array
 * @l: index of the left side
 * @r: index of the right side
 * @v: value to search for
 * Return: index of the value or -1 if element not found
 */
int search(int *a, size_t l, size_t r, int v)
{
	size_t x;
	size_t m;

	if (l <= r)
	{
		m = l + (r - l) / 2;
		if (a[m] == v)
			return (m);
		if (v > a[m])
		{
			if (l != r)
				printf("Searching in array: ");
			for (x = m + 1; x <= r; x++)
			{
				printf("%d", a[x]);
				if (x != r)
					printf(", ");
			}
			if (l != r)
				printf("\n");
			return (search(a, m + 1, r, v));
		}
		if (v < a[m])
		{
			if (l != r)
				printf("Searching in array: ");
			for (x = l; x < m - 1; x++)
			{
				printf("%d", a[x]);
				if (x != m - 1)
					printf(", ");
			}
			if (l != r)
				printf("\n");
			return (search(a, l, m - 1, v));
		}
	}
	return (-1);
}
/**
 * binary_search - search a value in an array
 * @array: pointer to the first element of the array
 * @value: value to search for
 * @size: size of the array
 * Return: index of the value or -1 if element not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x;

	if (!size || !array)
		return (-1);
	printf("Searching in array: ");
	for (x = 0; x < size; x++)
	{
		printf("%d", array[x]);
		if (x != size - 1)
			printf(", ");
	}
	printf("\n");
	return (search(array, 0, size - 1, value));
}
