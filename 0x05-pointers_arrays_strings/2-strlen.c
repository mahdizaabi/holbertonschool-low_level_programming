#include "holberton.h"

/**
 * _strlen - string length
 * @s: string 
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(i + s))
		i++;
	return (i);
}
