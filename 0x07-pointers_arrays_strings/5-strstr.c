#include <stdio.h>

/**
 * _strstr - finds the first occurrence
 * @haystack: the stringThe character
 * @needle: The character
 * Return: pointer.
 */

char *_strstr(char *haystack, char *needle)
{
	int i ,j = 0;

	while (haystack[i] != '\0')
{
		while (needle[j] && (haystack[i] == needle[0]))
	{
		if (haystack[i + j] == needle[j])
			j++;
				else
					break;
	}
	if (needle[j])
	{
	 	i++;
		j = 0;
	}
		else
		return (haystack + i);
	}
	return (0);
}

