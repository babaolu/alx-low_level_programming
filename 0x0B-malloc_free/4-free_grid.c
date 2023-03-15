#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional array of integers
 * @grid: Grid to be freed
 * @height: Height of the grid
 *
 * Return: Void (Nothing)
 */
void free_grid(int **grid, int height)
{
	int iter;

	for (iter = 0; iter < height; iter++)
		free(grid[iter]);
	free(grid);
}
