#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: char to check
 * @accept: char to look for
 * Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	while (*s)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
	s++;
	}
	return (0);
}
