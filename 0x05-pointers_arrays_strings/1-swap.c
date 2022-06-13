#include "main.h"
/* betty style doc for function main goes there */
/**
 * swap_int - function that swaps the values of two integers.
 * @a: integer input
 * @b: integer input
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int z = *a;
	*a = *b;
	*b = z;
}
