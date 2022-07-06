#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: character name input.
 * @f: function pionter which we pass it name.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
