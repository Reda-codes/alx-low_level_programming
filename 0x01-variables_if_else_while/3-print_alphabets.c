#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Prints the alphabet
 * a: alphabet
 * A: alphabet in capital letter
 * Return: return program's execution status
 */
int main(void)
{
	int a = 'a';
	int A = 'A';

	while (a <= 'z')
	{

		putchar(a);
		a += 1;
	}
	while (A <= 'Z')
	{

		putchar(A);
		A += 1;
	}
	putchar('\n');
	return (0);
}
