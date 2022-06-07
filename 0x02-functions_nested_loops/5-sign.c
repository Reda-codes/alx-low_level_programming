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
		putchar(43);
		r = 1;
	}
	else if (n == 0)
	{
		putchar(48);
		r = 0;
	}
	else if (n > -1)
	{
		putchar(45);
		r = -1;
	}
	return (r);
}
