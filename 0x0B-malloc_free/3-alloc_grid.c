#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - unction that returns 2 dimensional array of int
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to array, or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
