#include "holberton.h"

/**
 * _puts - Print a string.
 * @str: string.
 */
void _puts(char *str)
{
	while (*str)
		
		_putchar(*str++);

	_putchar('\n');
}
