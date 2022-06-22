#include "main.h"
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: string input
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*str)
	{
		_print_rev_recursion(str + 1);
		write(1, str, 1);
	}
}
