#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * _strcmp -  function that compares two strings.
 * @s1: string one
 * @s2: string two
 * Return: strcmp function result
 */
int _strcmp(char *s1, char *s2)
{
	int z = 0;
	int i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			z = ((s1[i] - '\0') - (s2[i] - '\0'));
			break;
		}
		i++;
	}
	return (z);
}
