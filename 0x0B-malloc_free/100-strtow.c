#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*strtow - function that split strings into words
*@str: pointer to the string
*Return: pointer
*/
char **strtow(char *str)
{
int i, j = 0;
int count = 0;
int size;
char **m;

if (str == NULL || *str == '\0')
	return (NULL);
for (i = 0; str[i]; i++)
	size++;
m = malloc(size);
	if (str == NULL)
		return (NULL);
for (i = 0; str[i]; i++)
{
	for (j = 0; str[j]; j++)
	{
		words[count][j] = str[i];
			count++;
	}
}
m[i] = '\0';
return (m);
free(m);
}
