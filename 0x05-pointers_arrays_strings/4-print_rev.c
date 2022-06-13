#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * print_rev - function that prints a string, in reverse.
 * @s: pointer
 * i: loop init value
 * arry reversed array
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	char arry[strlen(s)];

	for (i = 1; i <= strlen(s); i++)
	{
		arry[i] = s[strlen(s) - i];
	}

	puts(arry);
}
