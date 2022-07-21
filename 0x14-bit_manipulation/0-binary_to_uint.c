#include "main.h"
#include <stddef.h>

/**
 * strln - function that calculates
 * the lingth of a string
 * @s: string input
 * Return: string length
*/
int strln(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * binary_to_uint - function that
 * converts a binary number to an unsigned int.
 * @b: input char pointer
 * Return: the converted numbe, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bn = 0;
	int ln = strln(b);
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; i != ln; i++)
	{
		if (b[ln - i - 1] == '1')
		{
			bn += 1 << i;
		}
		else if (b[ln - i - 1] != '0')
		{
			return (0);
		}
	}
	return (bn);
}
