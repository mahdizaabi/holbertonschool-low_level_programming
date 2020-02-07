#include <stdio.h>

/**
 * main - Function
 *
 * Return: Always 0.
 */
int main(void)
{
	int d1, d2, d3

	for (d1 = 0; d1 < 8; d1++)
	{
		for (d2 = d1 + 1; d2 < 9; d2++)
		{
			for (d3 = d2 + 1; d3 < 10; d3++)
			{
				putchar((d1 % 10) + '0');
				putchar((d2 % 10) + '0');
				putchar((d3 % 10) + '0');

				if (d1 == 7 && d2 == 8 && d3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
