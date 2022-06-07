#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * print_sign  - Checks for number sign
 * @n: input
 * Return: returns 1 if positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		-putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
