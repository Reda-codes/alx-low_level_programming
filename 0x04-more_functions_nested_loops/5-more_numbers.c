#include "main.h"
/* betty style doc for function main goes there */
/**
 * more_numbers - Prints numbers from 0 to 14 ten times
 * a: initial number
 * c: columns
 * Return: void
 */
void more_numbers(void)
{
	int a
	int c

	for (c = 0; c < 10; c++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar((a / 10) + '0');
				_putchar((a / 10) + '0');
		}
		_putchar('\n');
	}
}
