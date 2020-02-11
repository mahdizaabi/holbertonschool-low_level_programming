#include <stdio.h>

/**
 * main - Printing first 50 Fibonacci numbers
 *
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long f1 = 0, f2 = 1, s;

	for (i = 0; i < 50; i++)
	{
		s = f1 + f2;
		printf("lu%", s);

		f1 = f2;
		f2 = s;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
