#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: initial segment
 * @accept: input bytes
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
