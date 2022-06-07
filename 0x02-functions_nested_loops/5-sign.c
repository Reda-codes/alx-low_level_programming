#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * print_sign  - Checks for number sign
 * @n: input
 * Return: returns the result of the check
 */
int print_sign(int n)

	{
	if (n < 0)
	{
		return (-1);
		printf("-");
	}
	else if (n > 0)
	{
		return (1);
		printf("+");
	} else
	{
		 return (0);
		 printf(0);
	}
};

