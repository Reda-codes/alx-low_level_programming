#include <stdio.h>
#include <ctype.h>
/* betty style doc for function main goes there */
/**
 * _isalpha  - Checks for alphabet
 * @c: input
 * Return: 1 if alphabet or 0 if not
 */
int _isalpha(int c)

	{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	};
};

