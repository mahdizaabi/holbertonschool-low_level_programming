#include "holberton.h"

/**
* _isalpha - function to check for lowercase and uppercase character
* @c : alphabet
*Return: 1 if c is lowercase,letter,uppercase, otherwise 0
*/
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);

	else

		return (0);

}
