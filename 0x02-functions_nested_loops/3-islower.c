#include <stdio.h>
#include <ctype.h>
/* betty style doc for function main goes there */
/**
 * _islower - Checks for lowercase
 * @c: input
 * Return: 1 if letter is lowercase or 0 if not
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	};
}
