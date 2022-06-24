#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * _memcpy - function that copies memory area.
 * @dest: memory adress of array
 * @src: memory address of source to copy from
 * @n: number of bytes to be filled
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
