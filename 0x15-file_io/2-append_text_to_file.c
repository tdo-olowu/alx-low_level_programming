#include "main.h"

#define OPEN_FLAGS (O_WRONLY | O_APPEND)

/**
 * append_text_to_file - appends text to file
 * @filename: the name of the file
 * @text_context: what to append.
 * Return: -1 for failure, 1 for success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t size, bytes_written;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, OPEN_FLAGS);
	if (file_d < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(file_d);
		return (1);
	}
	size = sizeof(text_content);
	bytes_written = write(file_d, text_content, size);
	if ((bytes_written < 0) || (bytes_written != size))
	{
		close(file_d);
		return (-1);
	}

	close(file_d);
	return (1);
}
