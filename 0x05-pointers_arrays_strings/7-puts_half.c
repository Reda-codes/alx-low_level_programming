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
	int i = 0;
	int t;

	while (i < z)
	{
		if (z % 2 == 0)
		{
			t = str[i];
			_putchar(t);
			i++;
		}
		else
		{
			t = str[(z - 1) / 2];
			putchar(t);
			break;
		}
	}
	_putchar('\n');
}
