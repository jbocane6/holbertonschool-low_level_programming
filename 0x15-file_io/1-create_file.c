#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure .
 * If filename is NULL return -1
 * If text_content is NULL create an empty file
*/

int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename || !text_content)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
