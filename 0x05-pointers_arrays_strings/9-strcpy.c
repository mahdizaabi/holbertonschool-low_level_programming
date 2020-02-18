#include "holberton.h"

/**
 * _strcpy - copy a  string.
 * @dest: string copy.
 * @src: string to copy.
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
