#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block.
 * @ptr : void pointer to the allocated memory area .
 * @old_size : the old size of the allocated memory.
 * @new_size : the new size of reallocated memory.
 * Return: void pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

/* allocating new dynamic memory without initialization */
	if (new_size > old_size)
	{
		free(ptr);
			ptr = (int *) malloc(new_size);
	if (ptr == NULL)
	return (NULL);
	else
	return (ptr);
	}
/*the call is equivalent to malloc(new_size)*/
	if (ptr == NULL)
	{
		return (ptr = (int *) malloc(new_size));

			if  (ptr == NULL)
				return (NULL);
	}
/* returns a Void Pointer */

	if (new_size == old_size)
	return (ptr);
/* freeing Ptr */
	if (new_size == 0 && ptr)
	{
		free(ptr);
			return (NULL);
	}

	return (ptr);
}
