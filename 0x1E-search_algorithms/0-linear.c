#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - search a value in an array
 * @array: pointer to the first element of the array
 * @value: value to search for
 * @size: size of the array
 * Return: index of the value or -1 if element not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || !value)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{

			return (i);

		}

	}

	return (-1);
}

