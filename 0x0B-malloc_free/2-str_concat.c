#include <string.h>
#include <stdlib.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * str_concat - function that concatenates two strings.
 * @s1: string one
 * @s2: string two
 * Return: pointer to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = malloc(0);
		s1[0] = '\0';
	}

	if (s2 == NULL)
	{
		s2 = malloc(0);
		s2[0] = '\0';
	}


	ar = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(s1); i++)
	{
		ar[i] = s1[i];
	}

	for (j = strlen(s1); j < strlen(s1) + strlen(s2); j++)
	{
		ar[j] = s2[j - strlen(s1)];
	}

	return (ar);
}
