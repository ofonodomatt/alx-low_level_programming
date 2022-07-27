#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees grid of its memory
 * @grid: Pointer
 * @height: height of grid
 * Return: 2D array(grid)
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
