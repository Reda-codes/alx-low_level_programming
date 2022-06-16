#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase.
 * @str: input string
 * Return: uppercase string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
