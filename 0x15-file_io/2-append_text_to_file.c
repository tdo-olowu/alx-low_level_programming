#include "main.h"


/**
 * append_text_to_file - appends text to file
 * @filename: the name of the file
 * @text_content: what to append.
 * Return: -1 for failure, 1 for success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t bytes_asked, bytes_written;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(file_d);
		return (1);
	}
	bytes_asked = strlen(text_content);
	bytes_written = write(file_d, text_content, bytes_asked);
	if ((bytes_written < 0) || (bytes_written != bytes_asked))
	{
		close(file_d);
		return (-1);
	}

	close(file_d);
	return (1);
}
