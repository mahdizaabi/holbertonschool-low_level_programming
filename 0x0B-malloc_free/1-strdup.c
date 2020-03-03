#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - a function to copy a string on a new allocated memory
 * area .
 * @str: string to copy
 *
 * Return: a pointer to the copied string .
 */

char *_strdup(char *str)
{
char *pointeur;
int i;
int count = 0;

/* in case if the given string is NULL*/
if (str == NULL)
	return (NULL);

/* finding the length of the given string*/
while (*(str + count))

	count++;
/*allocation the needed dynamic memory area */
pointeur = malloc(sizeof(char) * (count + 1));


/* to verify if the pointer , pointed on the allocated memory*/
/* area is not NULL */
if (pointeur == NULL)
	return (NULL);

/* initialization of i to avoid segment fault error*/
i = 0;

/* filling the allocated area with the bytes from the given string */
while (i <= count)
{
	*(pointeur + i) = *(str + i);
		i++;
}

/* return a pointer to the string */
return (pointeur);
}

