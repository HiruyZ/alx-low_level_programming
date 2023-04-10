#include "main.h"

/**
 * free_grid - free array by alloc_grid
 * @grid: a pointer to the first column
 * @height: the height of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
