#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @seperator: seperator.
 * @n: number of strings to be printed
 *
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list pointer;
	unsigned int i;
	char *s;

	va_start(pointer, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(pointer, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i < n - 1 && seperator)
			printf("%s", seperator);


	}
	va_end(pointer);
	printf("\n");
}
