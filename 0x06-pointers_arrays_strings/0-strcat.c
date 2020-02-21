#include "holberton.h"
/**
 * _strcat - concatonate two string.
 * @dest: destination.
 * @src: source
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	for (k = 0 ; k <= j; k++)
	{
		dest[i + k] = src[k];
	}
return (dest);
}
