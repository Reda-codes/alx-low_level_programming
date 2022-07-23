#include "main.h"

/**
 * flip_bits - function that returns
 * the number of bits you would need
 * to flip to get from one number to another.
 * @n: input number one
 * @m: input number two
 * Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int b;

	b = n ^ m;

	while (b != 0)
	{
		if ((b & 1) == 1)
			i++;
		b = b >> 1;
	}
	return (i);
}
