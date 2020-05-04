#include "holberton.h"
/**
 * _memset - fills memory with constant bytes
 * @s: the string to be checked
 * @b: constant byte.
 * @n: first n bytes to fill memory.
 *
 * Return: a string pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
