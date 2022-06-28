#include <stdlib.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: number of elemnt in the 2d array(columns)
 * @height: number of rows in the grid
 * Return: a pointer to a 2 dimensional array or
 * NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int rows = height;
	int i, j;
	int cols = width;
	int **array = malloc(rows * sizeof(int *));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	if (width <= 0 || height <= 0)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < rows; i++)
	{
		array[i] = malloc(cols * sizeof(int));
		if (array[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
		for (j = 0; j < cols; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
