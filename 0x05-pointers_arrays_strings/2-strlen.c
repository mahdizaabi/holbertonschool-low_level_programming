#include "holberton.h"

/**
 * _strlen - Returns the length of a string.
 * @str: string.
 *
 * Return: length.
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
