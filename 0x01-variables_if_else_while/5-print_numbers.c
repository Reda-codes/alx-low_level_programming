#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Prints numbers from 0 to 9
 * a: initial number
 * Return: return program's execution status
 */
int main(void)
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
