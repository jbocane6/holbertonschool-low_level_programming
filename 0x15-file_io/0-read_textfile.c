#include "main.h"

/**
 * read_textfile - Reads a text file
 * and prints it to the POSIX standard output.
 * @filename: file to read.
 * @letters: amount of letters
 * Return: The actual number of letters it could read and print.
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *str;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	str = malloc(letters * sizeof(char));
	if (!str)
		return (0);

	r = read(fd, str, letters);
	if (r == -1)
	{
		free(str);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, str, r);
	if (w == -1)
	{
		free(str);
		close(fd);
		return (0);
	}

	free(str);
	close(fd);

	return (w);
}
