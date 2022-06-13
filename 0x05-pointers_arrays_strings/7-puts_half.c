#include "main.h"
#include <stdio.h>
#include <string.h>
/* betty style doc for function main goes there */
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: input string
 * z: input length
 * i: loop initial value
 * t: character to return
 * Return: void
 */
void puts_half(char *str)
{
	int z = strlen(str);
	int i = z / 2;
	int t;

	if (z % 2 == 0)
	{
		while (i < z)
		{
			t = str[i];
			putchar(t);
			i++;
		}
	}
	else
	{
		i = (z - 1) / 2;
		while (i < z)
		{
			t = str[i];
			putchar(t);
			i++;
		}
	}
	_putchar('\n');
}
