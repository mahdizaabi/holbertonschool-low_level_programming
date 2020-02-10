#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
		putchar(',');
	}
		if (i == 9)
		{

			putchar(i + '0');
		}

	putchar('\n');
	return (0);
}
