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
	int i, j, p, m = 0, a = 0;

	/*access to the elements through the pointer Adress */
	for (i = 0; i < size; i++)
	{
		m += *(a + (i * size) + i);
	}
	for (j = 0; j < size; j++)
	{
	/* setting the parameters of the pointer adresse memory */
		a = *(a + (j * size) + (size - 1 - j));
	}
	printf("%i, %i\n", l, r);
}

