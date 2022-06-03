#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - checks if number is positive
 * n: The number to be checked
 * Return: return program's execution status
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%i is negative", n);
	}
	else if (n == 0)
	{
		printf("%i is zero", n);
	}
	else
	{
		printf("%i is positive", n);
	}
	return (0);
}
