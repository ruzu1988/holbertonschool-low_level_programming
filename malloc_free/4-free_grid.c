#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previosly created by alloc_grid
 * @grid: the 2d array of integers to free
 * @height: the height of the grid number of rows
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
