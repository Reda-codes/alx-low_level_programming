#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_most_numbers - Prints numbers from 0 to 9 not including 2 & 4
 * a: initial number
 * Return: return program's execution status
 */
void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a == 2 || a == 4)
		{
			a++;
		}
		else
		{
			_putchar(a);
			a++;
		}
	}
	_putchar('\n');
	return (0);
}
