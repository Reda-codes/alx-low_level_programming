#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: initial segment
 * @accept: input bytes
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
