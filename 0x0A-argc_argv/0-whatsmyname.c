#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * main - function that prints program name.
 * @argc: The number of command line arguments
 * @argv: An array that  containing the program command line arguments
 * Return: return program's execution status
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
