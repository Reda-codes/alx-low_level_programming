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
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
