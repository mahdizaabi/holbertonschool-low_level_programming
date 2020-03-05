#include "holberton.h"
#include <stdlib.h>

/**
 * *_calloc - Function to allocates memory for an array.
 * @nmemb: Number of the array elements.
 * @size: the size of elements on the Array.
 *
 * Return: void pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;
/*if size is NULL*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
/* if malloc fails , returns 0 */
	if (arr == NULL)
		return (NULL);
/* setting memory to zero */
	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

return (arr);
}
