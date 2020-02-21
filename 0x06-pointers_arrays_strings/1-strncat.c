include "holberton.h"
/**
 * _strncat - concatenate two strings
 * @dest: the destination string
 * @src: source string
 * @n: nb of bytes 
 *
 * Return: strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int length;

	for (length = 0; dest[length] != '\0'; length++)

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
