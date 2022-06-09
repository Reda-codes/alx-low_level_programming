#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_square - function that prints a square, followed by a new line.
 * @n: the number of times the character \ should be printed
 * Return: void
 */
void print_square(int size)
{
	int i;
	int g;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)

			for (g = 0 ; g < i; g++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
