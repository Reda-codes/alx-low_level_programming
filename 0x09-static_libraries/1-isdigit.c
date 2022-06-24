#include <stdio.h>
#include <ctype.h>
/* betty style doc for function main goes there */
/**
 * _isdigit - Checks if input is a digit
 * @c: input
 * Return: 1 if input is a digit or 0 if not
 */
int _isdigit(int c)
{
	if (isdigit(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	};
}
