#include "main.h"
#include <stdlib.h>
/**
 * free-grid - frees a 2 dimensional grid
 * @grid: multidimensional of integers
 * @height: height of the grid
 *
 * This function frees the memory allocated for a 2D grid
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
