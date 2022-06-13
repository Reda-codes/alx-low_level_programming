#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * rev_string - function that reverses a string.
 * @s: string
 * i: loop init value
 * z:string length
 * ary: reversed arry
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int z =  strlen(s);
	char ary[z];

	for (i = 1; i <= z; i++)
	{
		ary[i] = s[z - i];
	}

	*s = *ary;
}


