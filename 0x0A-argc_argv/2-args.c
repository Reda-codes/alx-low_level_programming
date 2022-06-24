#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * main - function that prints all arguments.
 * @argc: The number of command line arguments
 * @argv: An array that  containing the program command line arguments
 * Return: return program's execution status
 */
int main(int argc, char *argv[])
{
	int i = 0:
	
	for(i = 0; i < argc: i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
