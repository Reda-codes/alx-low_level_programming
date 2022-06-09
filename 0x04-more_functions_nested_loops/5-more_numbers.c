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
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}

			_putchar((b % 10) + '0');
		}

		_putchar('\n');
	}
}
