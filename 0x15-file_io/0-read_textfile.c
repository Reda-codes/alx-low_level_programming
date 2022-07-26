#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename:  text file
 * @letters: the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t i, j;
	char *bf;

	bf = malloc(letters);
	if (bf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(bf);
		return (0);
	}

	i = read(fd, bf, letters);

	j = write(STDOUT_FILENO, bf, i);

	close(fd);

	return (j);
}
