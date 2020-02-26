#include "holberton.h"

/**
 * factorial - compute the factorial of a given number.
 * @n: the number
 * Return: factorial number
 */
int factorial(int n)
{
	int fac = 1;

	if (n < 0)
		return (-1);

	else if (!n)
		return (1);

	fac = factorial(n - 1);

	return (fac * n);
}
