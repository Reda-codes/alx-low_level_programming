#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Prints numbers from 0 to 9 and letters from a to f
 * a: initial number
 * b: initial letter
 * Return: return program's execution status
 */
int main(void)
{
	int a = 48;
	int b = 97;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	while (b <= 102)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
