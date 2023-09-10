#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 *
 * @grid: the address of the two dimensional grid
 * @height: height of  grid
 *
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
