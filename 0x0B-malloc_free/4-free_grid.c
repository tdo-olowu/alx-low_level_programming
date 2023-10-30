#include "main.h"

/**
 * free_grid - frees a grid of memory.
 * @grid: a 2d array
 * @height: the number of rows
 * Return: no return value.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; ++i)
		free(grid++);
}
