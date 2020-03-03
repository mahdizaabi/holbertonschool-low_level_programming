#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free a two dimensional grid
 * @grid: the given grid
 * @height: the given height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;

i = 0;
while (i < height)
{
	free(grid[i]);
	i++;
}
	free(grid);
}
