#include "main.h"
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: input string
 * z: input length
 * i: loop initial value
 * t: character to return
 * Return: void
 */
void puts2(char *str)
{
	int z = strlen(str);
	int i = 0;
	int t;

	while (i < z)
	{
		if (i % 2 == 0)
		{
			t = str[i];
			_putchar(t);
		}
		i++;
	}
	_putchar('\n');
}
