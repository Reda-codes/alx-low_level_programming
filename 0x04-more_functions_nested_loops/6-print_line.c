#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_line - function that draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed
 * Return: void
 */
void print_line(int n)
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
			_putchar(95);
		}

		_putchar('\n');
	}
}
