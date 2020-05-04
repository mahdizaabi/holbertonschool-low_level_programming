#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a char in a string
 * @s: the string to check
 * @c: char to find
 *
 * Return: pointer to the first char ocurrency.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (&s[i]);
	if (s[i] == c)
		return (&s[i]);
	else
		return (0);
}
