#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - display the result of argv[1] * argv[2]
 * @argc: size of argv
 * @argv: array containing the program command line arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int m = 0;

	if (argc == 3)
	{
		m = atoi(argv[1]) * atoi(argv[2]);

			printf("%d\n", m);
			return (0);
	}
	else
	{
	printf("Error\n");
	}
	return (1);
}
