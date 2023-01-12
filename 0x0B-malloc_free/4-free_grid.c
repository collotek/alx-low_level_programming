#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - allocates grid, make space and free it
 * @grid: takes in width of grid
 * @height :accepts grid height
 * Return: free grid
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
