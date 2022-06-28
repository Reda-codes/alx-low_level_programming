#include <stdlib.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * free_grid -  function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: 2d array
 * @height: number of rows in the grid
 * Return: void
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
