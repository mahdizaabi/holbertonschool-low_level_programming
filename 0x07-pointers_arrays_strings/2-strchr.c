#include "holberton.h"

/**
 * _strchr - Locates a character in a string.
 * @s: string
 * @c: character .
 *
 * Return: NULL or pointer ..
 *         .
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) >= '\0'; i)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	return (s + i);
}
