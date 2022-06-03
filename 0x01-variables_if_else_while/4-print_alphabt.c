#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Prints the alphabet exept e and q
 * a: alphabet
 * Return: return program's execution status
 */
int main(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		if (a == 'q')
		{
			a += 1;
		}
		if (a == 'e')
		{
			a += 1;
		}
		else
		{
			putchar(a);
			a += 1;
		}
	}
	putchar('\n');
	return (0);
}
