#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * print_rev - function that prints a string, in reverse.
 * @s: pointer
 * i: loop init value
 * arry reversed array
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 1; i <= strlen(s); i++)
	{
		_putchar(s[strlen(s) - i]);
	}

	_putchar("\n");
}
