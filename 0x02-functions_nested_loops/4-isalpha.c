#include "holberton.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: Variable Input.
 *
 * Return: 1 if character letter and lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
