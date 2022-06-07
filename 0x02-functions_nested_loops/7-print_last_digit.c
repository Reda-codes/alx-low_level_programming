#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_last_digit - Prints last number
 * @n: input
 * v : n last digit
 * Return: last digit
 */
int print_last_digit(int n)
{

	int v = n % 10;

	if (v < 0)
		n  = v *-1;
	_putchar(v +'0');
	return (v);
}
