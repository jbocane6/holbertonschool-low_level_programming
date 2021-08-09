#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure
 * 1 if the file exists
 * -1 if the file does not exist or if does not have
 * the required permissions to write the file
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (fd);

	if (text_content)
	{
		w = write(fd, text_content, strlen(text_content));
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
