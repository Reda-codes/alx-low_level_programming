#include <stdlib.h>
#include <string.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string input
 * Return: Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer
 * to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	ar = malloc(sizeof(char) * (strlen(str) + 1));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < strlen(str); i++)
	{
		ar[i] = str[i];
	}
	return (ar);
}
