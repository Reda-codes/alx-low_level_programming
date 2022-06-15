#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * *_strncat - function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to use from src
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
