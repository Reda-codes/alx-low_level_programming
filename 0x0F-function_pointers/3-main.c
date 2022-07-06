#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - function that performs simple operations.
 * @argc: number of elemnts in argv
 * @argv: array of inputs
 * Return: prints the right calculations according
 * to the operation specified
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
