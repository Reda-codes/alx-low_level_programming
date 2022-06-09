#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_square - function that prints a square, followed by a new line.
 * @n: the number of times the character \ should be printed
 * Return: void
 */
void print_square(int n)
{
	int i;
	int g;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)

			for (g = 0 ; g < n; g++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
