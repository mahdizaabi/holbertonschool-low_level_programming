#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to check for
 *
 * Return: pointer tp s or null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	if (*(s + i) == c)
	{
	return (s + i);
	}
	}
	return (0);
}
