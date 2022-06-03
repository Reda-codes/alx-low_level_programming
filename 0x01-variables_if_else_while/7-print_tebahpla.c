#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Prints revers alphabet
 * a: initial letter
 * Return: return program's execution status
 */
int main(void)
{
	int a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a -= 1;
	}
	putchar('\n');
	return (0);
}
