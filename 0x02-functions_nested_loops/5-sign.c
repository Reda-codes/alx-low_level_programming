#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * print_sign  - Checks for number sign
 * @n: input
 * Return: returns 1 if positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		r = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		r = -1;
		_putchar('-');
	}
	return (r);
}
