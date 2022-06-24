#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * _strchr - function that locates a character in a string.
 * @s: the string to be scanned.
 * @c: This is the character to be searched in str.
 * Return: pointer to the first occurrence of the character c in the
 * string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
