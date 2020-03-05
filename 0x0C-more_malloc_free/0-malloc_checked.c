#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *malloc_checked - unction that allocates memory using malloc.
 *@b: unsigned int
 *Return: VOID Pointer
 */
void *malloc_checked(unsigned int b)
{
/* We don't know the type of bytes that will*/
/*occupy the allocated memory so we use VOID pointer type */
	void *pointer;

/* Dynamic memory allocation using malloc function */
	pointer = malloc(b);

/* if malloc fails to allocate the needed memory */
	if (pointer == NULL)
/* exit status value */
	exit(98);
/* the function return a pointer */
	return (pointer);
}
