#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * print_alphabet - Prints the alphabet
 * a: alphabet
 * Return: return program's execution status
 */
void print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{

		putchar(a);
		a += 1;
	}
	putchar('\n');
	return (0);
}
