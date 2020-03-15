#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that prints numbers.
 * @n: the last parameter
 *
 * Return: result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int s, i = 0;
	va_list argc;

	va_start(argc, n);
	for (i = 0; i < n; i++)
		sum += va_arg(argc, int);
	va_end(argc);
	return (s);
}
