#include "holberton.h"
/**
 * leet - a function that encodes a string into 1337.
 * @s: string.
 * Return: s.
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "aAeElLoOtT";
	char p[] = "4433110077";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
	{
			if (s[i] == a[j])
	{
			s[i] = p[j];
	}
	}
	}
	return (s);
}
