#include <stdio.h>
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
		int r = argv[2] * argv[3];

		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
