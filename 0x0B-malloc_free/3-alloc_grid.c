#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*alloc_grid - function that returns a 2 dimensional array of integers.
*@width: width
*@height: height
*Return: pointer pointed to the grid .
*/

int **alloc_grid(int width, int height)
{
int **grid;
int i;

grid = malloc(height * sizeof(int *));

if (width <= 0 || height <= 0)
	return (NULL);

if (grid == NULL)
	return (NULL);

for (i = 0; i < height; i++)
{
	grid[i] = malloc(width * sizeof(int));
}
return (grid);
}
