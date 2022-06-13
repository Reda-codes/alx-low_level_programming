#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * print_rev - function that prints a string, in reverse.
 * @s: string
 * i: loop init value
 * z:string length
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int z =  strlen(s);

	for (i = 1; i <= z; i++)
	{
		_putchar(s[z - i]);
	}

	_putchar('\n');
}
