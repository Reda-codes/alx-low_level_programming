#include <string.h>
#include <stdlib.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * string_nconcat - function that allocates memory using malloc.
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2
 * Return: pointer to the newly allocated space in memory which
 * contains s1, followed by the first n bytes of s2 and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		ar = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 2));
		if (ar == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < strlen(s1); i++)
			ar[i] = s1[i];

		for (j = strlen(s1); j < strlen(s1) + strlen(s2); j++)
			ar[j] = s2[j - strlen(s1)];
	}
	else
	{
		ar = malloc(sizeof(char) * (strlen(s1) + n + 2));
		if (ar == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < strlen(s1); i++)
			ar[i] = s1[i];

		for (j = strlen(s1); j < strlen(s1) + n; j++)
			ar[j] = s2[j - strlen(s1)];
	}
	ar[strlen(s1) + n] = '\0';
	return (ar);
}
