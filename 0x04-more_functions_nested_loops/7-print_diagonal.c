#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_diagonal - function that draws a straight line in the terminal.
 * @n: the number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(32);
		}

		_putchar(92);
		_putchar('\n');
	}
}
