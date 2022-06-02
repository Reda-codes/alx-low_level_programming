#include <unistd.h>
#include <string.h>

/**
 * main - Prints my-string
 * Return: return program's execution status
 */
int main(void)
{

        char my_string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
        write(STDOUT_FILENO, my_string, strlen(my_string));

        return (1);
}}
