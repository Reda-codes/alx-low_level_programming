#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_last_digit - Prints last number
 * @v: input
 * Return: last digit
 */
int print_last_digit(int v)
{
	if (v < 0)
		n = n * -1;
	_putchar((v % 10) + '0');
	return (v % 10);
}
