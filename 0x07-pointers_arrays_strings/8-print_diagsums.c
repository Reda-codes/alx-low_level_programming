#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * print_diagsums -  function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: arries to form the matrix
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[i];
		k += a[size - i - 1];
		a += size;
	}
	printf("%d, ", j);
	printf("%d\n", k);
}
