#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * print_numbers - Prints numbers from 0 to 9
 * a: initial number
 * Return: return program's execution status
 */
void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		printf("%i", a);
		a++;
	}
	putchar('\n');
	return (0);
}
