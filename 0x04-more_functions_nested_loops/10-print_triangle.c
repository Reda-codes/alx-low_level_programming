#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_triangle -  function that prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 * Return: void
 */
void print_triangle(int size);
{
	int i;
	int g;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (g = size; g < 1; g--)
			{
				_putchar(32);
			}
			for (k = 0; k <= i; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
