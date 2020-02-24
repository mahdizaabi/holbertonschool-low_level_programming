#include "holberton.h"

/**
 * _memcpy - fnct to copy memory content source to a char destination .
 * @dest: memory allocation of the destination
 * @src: memory content to copy from the src
 * @n: content in byte to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
