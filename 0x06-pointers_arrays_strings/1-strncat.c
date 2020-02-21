#include "holberton.h"

/**
 * _strncat - function
 *@dest: char
 *@src: char
 *@n: int
 *Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';

	return (dest);
}
