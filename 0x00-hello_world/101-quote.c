#include <unistd.h>
#include <string.h>

/**
 * main - Prints str
 * Return: return program's execution status
 */
int main(void)
{

	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, str, strlen(str));

	return (1);
}
