#include "holberton.h"
/**
 * leet - a function that capitalizes all words of a string.
 * @a: pointer char
 * Return: pointer
 */

char *leet(char *a)
{
	int i = 0, int j;
	char c[] = "aAeEoOtTlL", char r[] = "4433007711";

	while (a[i] != '\0')
	{
	for (j = 0; c[j] != '\0'; j++)
	{
	if (a[i] == c[j])
	{
		a[i] = r[j];
		break;
	}
	}
		i++;
	}
	return (a);
}
