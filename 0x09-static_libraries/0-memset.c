#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * _memset - function that fills memory with a constant byte.
 * @s: memory adress of  array
 * @b: the constant byte
 * @n: number of bytes to be filled
 * Return: the memory adress of  array
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
