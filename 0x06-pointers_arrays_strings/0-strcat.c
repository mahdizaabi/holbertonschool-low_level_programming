#include "holberton.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string to append to
 * @src: string to append
 *
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++, j++;
	}
	dest[i] = src[j];
	return (dest);
}
