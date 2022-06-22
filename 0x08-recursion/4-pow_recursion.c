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
	int i;

	if (y < 0)
	{
		i = 0;
	}
	else
	{
		i = pow(x, y);
	}
	return (i);
}
