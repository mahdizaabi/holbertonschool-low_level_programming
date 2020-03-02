#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string .
 * @s: string to check
 * @c: character to found
 * UPDATE V1.0 : Features : Pointers implementation instead of Arrays .
 * Pointer/memory incrementation instead of i .
 * Return: pointer to s or null
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		s++;

			if (*s == c)
		{
			return (s);
		}


	}

		return (0);


}

