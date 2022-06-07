#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - Prints the alphabet
 * a: alphabet
 * i: loop init
 * Return: return program's execution status
 */
int print_alphabet_x10(void)
{

	int i;

	for (i = 0; i < 10; i++)
	{

		int a = 'a';

		while (a <= 'z')
		{

			putchar(a);
			a += 1;
		}
		putchar('\n');
	}
	return (0);
}
