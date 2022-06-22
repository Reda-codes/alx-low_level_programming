#include "main.h"

/* betty style doc for function main goes there */
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: input number
 * Return: natural square root of a number
 * if n does not have a natural square root
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
/**
 * sqr - function that calculates the natural square root.
 * @n: input number
 * @i: int to find square root
 * Return: natural square root of a number
 */
	int sqr(int n, int i)
	{
		if (i * i == n)
		{
			return (i);
		}
		else if (i * i < n)
		{
			return  (sqr(n, i + 1));
		}
		else
		{
			return (-1);
		}
		return (sqr(n, 1));
	}

	return (sqr(n, 1));
}
