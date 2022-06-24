#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * main - function that adds positive numbers.
 * @argc: The number of command line arguments
 * @argv: An array that  containing the program command line arguments
 * Return: return program's execution status
 */
int main(int argc, char *argv[])
{
	int s = 0;
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		s += atoi(argv[i]);
	}
	printf("%d\n", s);
	return (0);
}
