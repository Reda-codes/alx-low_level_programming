#include <stdlib.h>
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
	return (strdup(str));
}
