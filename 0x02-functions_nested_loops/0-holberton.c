#include "holberton.h"
/**
 * main - main function .
 *
 * Return: 0
 */
int main(void)
{
	char h[] = "Holberton";
	int s = sizeof(h);
	int i;

	for (i = 0; i < s; i++)
	{
		_putchar(h[i]);

	}

	_putchar('\n');
	return (0);
}
