#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: arguments separator.
 * @n: Number of arguments passed to function.
 * Return: prints arguments separated by separator
 * if separator is NULL it won't be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		char *c = va_arg(list, char*);

		printf("%s", c);

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
