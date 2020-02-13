#include "holberton.h"

/**
 *print_line - printing lines
 *@n: int
 * Return: No retrun
 */

void print_line(int n)
{

int i;
	for (i = 0; i < n; i++)
	{
		_putchar('_');
		_putchar('\n');
	}
}
