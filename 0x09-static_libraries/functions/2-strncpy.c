#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * *_strncpy -  function that copies a string.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to use from src
 * Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
