#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of diagonals .
 * @a: pointer to an array
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int c = 0;
	int d = 0;

	for (i = 0; i < size; i++)
	{
		c = c + *(a + i * sizeof(int));
	}

	for (j = 0; j < size; j++)

	{
		d = d + *(a + (size * j) + (size - j - 1));
	}
	printf("%d, %d\n", c, d);
}
