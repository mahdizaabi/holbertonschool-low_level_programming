#include "holberton.h"

/**
 * jack_bauer - Day timing
 *
 */
void jack_bauer(void)
{
	int h, s;

	for (h = 0; h <= 23; h++)
	{
		for (s = 0; s <= 59; s++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar('\n');
		}
	}
}
