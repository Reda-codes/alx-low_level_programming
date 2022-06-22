#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * factorial - function that returns the factorial of a given number.
 * @n: input number
 * Return: returns the factorial of a given number
 * If n is lower than 0, the function should return -1
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));

	}
}
