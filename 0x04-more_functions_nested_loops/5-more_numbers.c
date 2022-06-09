#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * more_numbers - Prints numbers from 0 to 14 ten times
 * a: initial number
 * c: columns
 * Return: return program's execution status
 */
void more_numbers(void)
{
	int a = 0;
	int c = 0;

	while (c <= 9)
	{
		while (a <= 14)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		a =  0;
		c++;
	}
}
