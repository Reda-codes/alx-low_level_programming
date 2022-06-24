#include <unistd.h>

/* betty style doc for function main goes there */
/**
 * _putchar - writes the character c to stdout
 * @c: input character to print
 *
 * Return: 1if success or -1 if errore.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
