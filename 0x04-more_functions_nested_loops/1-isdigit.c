#include "holberton.h"

/**
 * _isdigit - checks for characters that are digits
 * @c: character 
 *
 * Return: 0 or 1
 */


int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
