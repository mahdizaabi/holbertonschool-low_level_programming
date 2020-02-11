#include "holberton.h"
/**
 *_islower - check if the character is lowercase
 *
 *
 * Return: 1 for lowercase characters, 0 fot not characters.
 */
int _islower(int c)
{
	if(c >= 97 && c <=122)
	{
		return(1);
	}
	return (0);
}
