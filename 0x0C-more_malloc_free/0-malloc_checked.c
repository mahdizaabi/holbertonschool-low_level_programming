#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *malloc_checked - function
 *@b: int
 *Return: void
 */
void *malloc_checked(unsigned int b)
{
/* We don't know exactly the type of bytes that will*/
/*occupy the allocated memory so we use VOID type pointer*/
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
