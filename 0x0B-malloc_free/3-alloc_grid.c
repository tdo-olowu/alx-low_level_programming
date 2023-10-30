#include "main.h"

/**
 * alloc_grid - allocates memory for a grid of ints
 * @width: how many ints per row?
 * @height: how many rows?
 * Return: pointer to the first array of ints
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	for (h = 0 ; h < height ; ++h)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			for ( ; h >= 0 ; --h)
				free(grid[h]);
			return (NULL);
		}
	}
	for (h = 0 ; h < height ; ++h)
	{
		for (w = 0 ; w < width ; ++w)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}

