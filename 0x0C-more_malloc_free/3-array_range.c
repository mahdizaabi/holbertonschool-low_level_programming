#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int i, l;
	int *mem;

	if (min > max)
		return (NULL);
	l = max - min + 1;
/* dynamic memory space allocation */
	mem = malloc(sizeof(int) * l);
/* memory allocation fail exit */
	if (mem == NULL)
		return (NULL);
/*filling the array with numbers from min to max */
	for (i = min; i <= max; i++)
	{
		mem[i - min] = i;
	}

	return (mem);
}
