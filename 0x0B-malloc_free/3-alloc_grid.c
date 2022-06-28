#include <stdlib.h>
#include <string.h>
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
	int i;
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
	}
	return (array);
}
