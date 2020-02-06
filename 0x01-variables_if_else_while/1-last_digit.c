#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 * Description: last digit printing
 * Return: 0
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = n % 10;
	if (x > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	if (x == 0)
		printf("Last digit of %d is %d and is 0\n", n, x);
	else if (x < 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	return (0);
}

