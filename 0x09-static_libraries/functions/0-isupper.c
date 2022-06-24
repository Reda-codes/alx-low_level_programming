#include <stdio.h>
#include <ctype.h>
/* betty style doc for function main goes there */
/**
 * _isupper - Checks for uppercase
 * @c: input
 * Return: 1 if letter is uppercase or 0 if not
 */
int _isupper(int c)
{
	if (isupper(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	};
}
