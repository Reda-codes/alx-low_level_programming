#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * main - function that multiplies two numbers.
 * @argc: The number of command line arguments
 * @argv: An array that  containing the program command line arguments
 * Return: return program's execution status
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);
		int r = i * j;

		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0)
}
