#include <stdio.h>
#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to check for
 *
 * Return: pointer .
 */

char *_strchr(char *s, char c)
{
	int i = 0, offset = 0;

	while (*(s + i) != '\0')
	{

		if (*(s + i) == ch)
		offset = i;
		count++;
		return (s + offset);
	else if (*(s + i) != ch)
		return (NULL);
	}

}
