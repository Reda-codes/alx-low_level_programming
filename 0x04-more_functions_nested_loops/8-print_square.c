#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_square - function that prints a square, followed by a new line.
 * @size: the number of times and lines the character # should be printed
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
		{
			for (g = 0 ; g < size; g++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
