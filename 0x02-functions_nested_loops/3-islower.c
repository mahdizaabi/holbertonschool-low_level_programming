#include "holberton.h"

/**
*_islower - function to check for lowercase character
*
*Return: 1 if c is lowercase, otherwise 0
*/

int _islower(int i)

{

	if (i >= 'a' && i <= 'z')

		return (1);

	else

		return (0);

}
