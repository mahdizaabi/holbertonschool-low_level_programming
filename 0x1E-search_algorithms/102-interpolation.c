#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * interpolation_search - search a value in an array
 * @array: pointer to the first element of the array
 * @size: index of the left sidey
 * @value: value to search for
 * Return: index of the value or -1 if element not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l;
	size_t h;
	size_t p;

	if (!array)
		return (-1);
	l = 0;
	h = size - 1;
	while (array[l] <= value && array[h] >= value && l <= h)
	{
		if (l == h)
		{
			if (array[l] == value)
			{
				printf("Value checked array[%lu] = [%d]", l, array[l]);
				return (l);
			}
			printf("Missing Edge Case !!!");
			return (-1);
		}
		p = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (array[p] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", p, array[p]);
			return (p);
		}
		if (array[p] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", p, array[p]);
			l = p + 1;
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", p, array[p]);
			h = p - 1;
		}
	}
	p = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
	printf("Value checked array[%lu] is out of range\n", p);
	return (-1);
}
