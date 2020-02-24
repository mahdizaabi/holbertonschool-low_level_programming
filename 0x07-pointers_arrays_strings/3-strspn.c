#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: The character to print
 * @accept: character destination
 * Return: i.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
	{
			if (*(s + i) == (s + j))
				break;
	}
		if (!(accept + j))
			break;
	}
	return (i);
}
