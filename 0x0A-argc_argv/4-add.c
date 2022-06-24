#include <stdio.h>
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
	int i;

	if (argc == 1)
	{
		printf("0\n")
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (isdigit(atoi(argv[i]) == 0))
			{
				printf("Error");
				return (1);
			}
			else
			{
				int s;

				s += atoi(argv[i]);
				printf("%d\n", s);
			}
		}
	}
	return (0);
}
