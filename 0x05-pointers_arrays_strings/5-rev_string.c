#include "holberton.h"

/**
 * rev_string - Reverses a string.
 * @s: string to be reserved.
 */
void rev_string(char *s)
{
	int i = 0, len = 0;
	char tmp;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
