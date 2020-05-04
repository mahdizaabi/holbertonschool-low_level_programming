#include "holberton.h"

/**
 * _puts - Prints a string .
 * @str: string.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
