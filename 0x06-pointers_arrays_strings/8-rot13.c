#include "holberton.h"
/**
 * *rot13 - encoding a string to integer.
 * @s: pointer.
 * Return: z.
 */
char *rot13(char *s)
{
	int i = 0, j = 0;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char t[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; j <= 51; j++)
	{
			if (s[i] == a[j])
	{
				s[i] = t[j];
					break;
	}
	}
		i++;
	}
	return (s);
	}
