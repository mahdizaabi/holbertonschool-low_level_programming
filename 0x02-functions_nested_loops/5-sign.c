#include "holberton.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The variable Input
 *
 * Return: 1 if n positive,
 *         0 if n equal to zero,
 *         -1 if n negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
