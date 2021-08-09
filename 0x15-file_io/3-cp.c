#include "main.h"

#define err STDERR_FILENO

/**
 * main - Copies the content of a file to another file.
 * @argc: Amount of arguments received
 * @argv: Names of files to read and copy text.
 * Return: 0.
 * If the number of argument is not the correct one, 97.
 * If file_from does not exist, or if can not read it, 98.
 * If can not create or if write to file_to fails, 99.
 * If can not close a file descriptor, 100
*/

int main(int argc, char *argv[])
{
	int ff, ft, r = 1, w = 1;
	char str[1024];

	if (argc != 3)
		dprintf(err, "Usage: cp file_from file_to\n"), exit(97);

	ff = open(argv[1], O_RDONLY);
	if (ff == -1)
		dprintf(err, "Error: Can't read from file %s\n", argv[1]), exit(98);

	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC);
	if (ft == -1)
		dprintf(err, "Error: Can't write to %s\n", argv[2]), exit(99);

	while (r > 0)
	{
		r = read(ff, str, 1024);
		if (r == -1)
		{
			dprintf(err, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		w = write(ft, str, r);
		if (w == -1)
		{
			dprintf(err, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	r = close(ff);
	if (r == -1)
		dprintf(err, "Error: Can't close fd %d\n", ff), exit(100);
	w = close(ft);
	if (w == -1)
		dprintf(err, "Error: Can't close fd %d\n", ft), exit(100);

	return (0);
}
