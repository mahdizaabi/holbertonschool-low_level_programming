#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Write a program that multiplies two numbers.
 * @argc: size of argv.
 * @argv: a pointer to an array containing the program line arguments.
 * Return: 0.
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
