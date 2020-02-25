#include <stdio.h>

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: input
 *@accept: input
 *Return: string
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, j = 0, k;
char *r;
r = NULL;
	while (*(accept + j) != '\0')
	j++;

	while (*(s + i) != '\0')
	{
		for (k = 0; k < j; k++)
		{
			if (*(s + i) == *(accept + k))
			{
				r = s + i;
				break;
			}
		}
		i++;
	}
return (r);
}

