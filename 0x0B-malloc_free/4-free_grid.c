#include "main.h"
#include <stdlib.h>

/**
  * free_grid - ...
  * @grid: address of the two dimensional grid
  * @height: height of the grid
  *
  * Return: 0.
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
