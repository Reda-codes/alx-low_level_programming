#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * _abs - Prints the absolute value of an integer.
 * @n: input
 * Return: return program's execution status
 */
int _abs(int n)
{
	int v =  abs(n);

	printf("%d", v);
	return (0);
}
