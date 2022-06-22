#include "main.h"
/* betty style doc for function main goes there */
/**
 * is_prime - checkes if numbers below n can divide n
 * @n: input number
 * @i: numbers to loop
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0
 */
int is_prime(int n, int i)
{
	if (i >= n  && n > 1)
	{
		return (1);
	}
	else if (n % i == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, i + 1));

	}
}
/* betty style doc for function main goes there */
/**
 * is_prime_number -  function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: input number
 * Return: returns is_prime result
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

