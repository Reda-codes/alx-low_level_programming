#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * *_strcat - function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
