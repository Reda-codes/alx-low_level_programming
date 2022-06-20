#include "main.h"
#include <string.h>
/* betty style doc for function main goes there */
/**
 * print_chessboard - function that prints the chessboard.
 * @a: input array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
