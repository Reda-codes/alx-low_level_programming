#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_most_numbers - Prints numbers from 0 to 9 not including 2 & 4
 * i: initial number
 */
void print_most_numbers(void)
{
	int i;

		for (i = '0'; i <= '9'; i++)
		{
			if (i == '2' || i == '4')
			{
				continue;
			}

			_putchar(i);
		}
	_putchar('\n');
}
