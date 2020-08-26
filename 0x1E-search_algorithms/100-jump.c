#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * search - search a value in an array
 * @a: pointer to the first element of the array
 * @l: index of the left side
 * @r: index of the right side
 * @v: value to search for
 * Return: index of the value or -1 if element not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);


	if (!array)
		return(-1);
	while(array[step] <= value || step < size)
	{
		step_before = step;
		step = step + sqrt(n);

		if (step > size - 1)
			return(-1)
	}
	for(x = step_before; x < step; x++)
	{
		if(array[x] == value)
			return (x);
	}
	return (-1)
}
