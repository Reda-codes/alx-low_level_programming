#include "main.h"
#include <stddef.h>

/**
 * create_file - function that creates a file.
 * @filename: name of file to be created
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, st;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;

		st = write(fd, text_content, i);
		if (st == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
