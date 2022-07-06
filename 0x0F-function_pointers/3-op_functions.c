#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - claculates the sum of a plus b.
 * @a: int input
 * @b: int input
 * Return: returns the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - claculates the difference of a and b.
 * @a: int input
 * @b: int input
 * Return: returns the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply a by b.
 * @a: int input
 * @b: int input
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that devides a by b.
 * @a: int input
 * @b: int input
 * Return: returns the result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - function that calculates remainder of a divided by b.
 * @a: int input
 * @b: int input
 * Return: returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
