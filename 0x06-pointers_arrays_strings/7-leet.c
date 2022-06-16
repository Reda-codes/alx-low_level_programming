#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * leet - function that encodes a string into 1337.
 * @s: input string
 * Return: encoded string
 */
char *leet(char *s)
{
	char *rv = s;
	char let[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(let) / sizeof(char); i++)
		{
			if (*s == let[i] || *s == let[i] + 32)
			{
				*s = 48 + num[i];
			}
		}
		s++;
	}

	return (rv);
}
