#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - printing numbers to 98,seprated by a column
 *
 * @n: counter.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
