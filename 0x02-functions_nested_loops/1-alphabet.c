#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Prints the alphabet
 * a: alphabet
 * Return: return program's execution status
 */
int main(void)
{
        int a = 'a';

        while (a <= 'z')
        {

                putchar(a);
                a += 1;
        }
        putchar('\n');
        return (0);
}
