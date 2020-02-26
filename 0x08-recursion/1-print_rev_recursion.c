#include "holberton.h"

/**
 * _print_rev_recursion - print revesed string .
 * @s: string to print .
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
