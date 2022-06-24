#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * _strstr - unction that locates a substring.
 * @haystack: the string to search in
 * @needle:  substring to search for
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
