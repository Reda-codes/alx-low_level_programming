#include "main.h"
#include <string.h>
#include <stdlib.h>
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
	char *ary;
	ary = (char*) malloc(z * sizeof(char));

	for (i = 0; i <= z; i++)
	{
		ary[i] = s[i];
	}

	for (i = 1; i <= z + 1; i++)
	{
		s[i - 1] = ary[z - i];
	}
}


