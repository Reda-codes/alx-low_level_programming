#include <stdlib>
/* betty style doc for function main goes there */
/**
 * fizz_buzz - the FizzBuzz challenge
 * Return: void
 */
void fizz_buzz(void)
{
	int i = 0;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%i ", i);
		}

	}
	printf("\n");
}
