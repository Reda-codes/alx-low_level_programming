#include "main.h"
#include <unistd.h>
/* betty style doc for function main goes there */
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: string input
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		write(1, s, 1);
	}
}
