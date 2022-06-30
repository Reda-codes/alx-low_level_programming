#include <stdlib.h>
#include <limits.h>
/* betty style doc for function main goes there */
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: integer input
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
