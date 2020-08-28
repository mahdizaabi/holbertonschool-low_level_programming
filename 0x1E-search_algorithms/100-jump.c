#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * print - search a value in an array
 * @array: pointer to the first element of the array
 * @p_before: index of the left sidey
 * @step: value to search for
 * @value: value to search for
 * Return: index of the value or -1 if element not found
 */
int print(int *array, size_t p_before, size_t step, int value)
{
	size_t x;

	for (x = p_before; x <= step; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (x);

}
/**
 * jump_search - search a value in an array
 * @array: pointer to the first element of the array
 * @size: index of the left side
 * @value: index of the right side
 * Return: index of the value or -1 if element not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t x;
	size_t p_before = 0;
	size_t gap = sqrt(size);
	char *check = "Value checked array[%lu] = [%d]\n";
	char *found = "Value found between indexes [%lu] and [%lu]\n";

	if (!array && size <= 0)
		return (-1);
	printf(check, p_before, array[p_before]);
	while (array[step] < value && step <= size)
	{
		if (array[step] != value)
			printf(check, step, array[step]);
		p_before = step;
		step = step + sqrt(size);
		if (step > size)
		{
			printf(found, p_before, step);
			printf(check, p_before, array[p_before]);
			return (-1);
		}
	}
	if (value >= array[gap])
		printf(found, p_before, step);
	else
	{
		printf("Value found between indexes [0] and [%lu]\n", gap);
		for (x = 0; x < gap; x++)
		{
			printf(check, x, array[x]);
			if (array[x] == value)
				return (x);
			else
				return (-1);
		}
	}
	return (print(array, p_before, step, value));
}
