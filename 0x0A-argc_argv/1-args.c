#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: The number of command line arguments
 * @argv: An array that  containing the program command line arguments
 * Return: return program's execution status
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
