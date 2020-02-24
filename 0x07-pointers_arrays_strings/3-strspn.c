#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: character to print
 * @accept: character
 * Return: i.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
	{
			if (*(s + i) == *(accept + j))
				break;
	}
			if (!accept[j])
			break;
	}
	return (i);
}
