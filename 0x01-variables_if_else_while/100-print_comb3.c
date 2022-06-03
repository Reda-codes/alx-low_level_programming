#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Prints all possible different combinations of two digits
 * i: initial number
 * k: initial number
 * g: updated value
 * Return: return program's execution status
 */
int main(void)
{

	int i;
	int k;
	int g = 49;

	for (i = 48; i <= 56; ++i)
	{
		for (k = g; k <= 57; ++k)
		{
			putchar(i);
			putchar(k);
			if (i != 56 || k != 57)
			{
				putchar(44);
				putchar(32);
			}

		}
		g++;
	}
	putchar('\n');
	return (0);
}
