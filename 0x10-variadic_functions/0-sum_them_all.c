#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of arguments passed to the function.
 * Return: returns the sum of all argument
 * and retuens 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0, sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
