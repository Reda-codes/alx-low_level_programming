#include "main.h"
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: input arry
 * @n: number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%i, ", a[i]);
		}
		printf("%i\n", a[n - 1]);
	}
	else
	{
		printf("\n");
	}
}
