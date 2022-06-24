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
	if ((c >= 48) && (c <= 57))
	return (1);

	return (0);
}
