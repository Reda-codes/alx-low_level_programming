#include "main.h"
#include <stdio.h>
#include <math.h>
/* betty style doc for function main goes there */
/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y.
 * @x: number input
 * @y: power of
 * Return:  value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
