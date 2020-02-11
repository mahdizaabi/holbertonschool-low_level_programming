#include "holberton.h"

/**
*_islower - function to check for lowercase character
*@c: print alphbet
*Return: 1 if c is lowercase, otherwise 0
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')

		return (1);

	else

		return (0);

}
