#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers.
 * @min: min number in array
 * @max: max number in array
 * Return: the pointer to the newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *ar;
	int i = 0, j = 0;
	int sum;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * (max - min + 1));

	if (ar == NULL)
		return (NULL);

	j = min;

	while (i <= max - min)
		ar[i++] = j++;

	return (ar);
}
