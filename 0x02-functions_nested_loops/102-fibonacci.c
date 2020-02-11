#include <stdio.h>

/**
 * main - Printing first 50 Fibonacci numbers
 *
 *
 * Return: 0
 */
int main(void)
{
	int i, f1 = 0, f2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = f1 + f2;
		printf("d%", sum);

		f1 = f2;
		f2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
