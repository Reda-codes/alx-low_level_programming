#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_numbers - Prints numbers from 0 to 9
 * i: initial number
 * Return: void
 */
void print_numbers(void)
{
	int i;

		for (i = '0'; i <= '9'; i++)
		{

			_putchar(i);
		}
	_putchar('\n');
}
