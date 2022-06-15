#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: Array input
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i != n - 1)
		{
			_putchar(", ");
		}
		_putchar("%d", a[i]);
		i--;
	}
	_putchar('\n');
}
