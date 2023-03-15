#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2-dimensional array of integers
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to the grid,
 * 0 if allocation fails or if size is 0 or less
 */
int **alloc_grid(int width, int height)
{
	int iter, witer;
	int **ptr;

	if ((width + height) < 2)
		return (NULL);

	ptr = (int **) malloc(sizeof(int *) * height);
	if (!ptr)
		return (NULL);

	for (iter = 0; iter < height; iter++)
	{
		ptr[iter] = (int *) malloc(sizeof(int) * width);
		if (!ptr[iter])
		{
			while (iter > 0)
			{
				free(ptr[iter - 1]);
				iter--;
			}
			free(ptr);

			return (NULL);
		}

		for (witer = 0; witer < width; witer++)
			ptr[iter][witer] = 0;
	}

	return (ptr);
}
