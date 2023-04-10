#include "main.h"

/**
 * **alloc_grid - allocate memory to grid
 * @width: width of array
 * @height: height of array
 * Return: 2d array of 0s
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return  (NULL);
	}
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(width * sizeof(int));
		if (ptr[x] == NULL)
		{
			for (y = 0; y < x;  y++)
				free(ptr[y]);
			free(ptr);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			ptr[x][y] = 0;
		}
	}
	return (ptr);
}
