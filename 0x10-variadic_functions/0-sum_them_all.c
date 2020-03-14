#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters.
 * @n: number of parameters
 *
 * Return: sum .
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list pointer;

	if (n <= 0)
	return (0);

	va_start(pointer, n);
	for (i = 0; i < n; i++)
		sum += va_arg(pointer, int);
	va_end(pointer);
	return (sum);
}
