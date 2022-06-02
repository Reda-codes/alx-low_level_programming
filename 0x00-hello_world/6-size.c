#include <stdio.h>

/**
 * main - Prints str1
 * Return: return program's execution status
 */
int main(void)
{
	int intType;
	float floatType;
	long int longIntType;
	long long int longLongIntType;
	char charType;

	printf("Size of an char: %i byte(s)\n", sizeof(charType));
	printf("Size of an int: %i byte(s)\n", sizeof(intType));
	printf("Size of an long int: %i byte(s)\n", sizeof(longIntType));
	printf("Size of an long long int: %i byte(s)\n", sizeof(longLongIntType));
	printf("Size of an float: %i byte(s)\n", sizeof(floatType));

	return (0);
}
