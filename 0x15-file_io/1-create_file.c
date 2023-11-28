#include "main.h"

#define OPEN_FLAGS O_CREAT | O_WRONLY | O_TRUNC
#define MODE_FLAGS S_IRUSR | S_IWUSR

/**
 * create_file - creates a file.
 * @filename: what should we name it?
 * @text_content: what should it contain?
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t bytes_written, size;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, OPEN_FLAGS, MODE_FLAGS);
	if (file_d < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(file_d);
		return (1);
	}

	size = strlen(text_content);
	bytes_written = write(file_d, text_content, size);
	if ((bytes_written < 0) || (bytes_written < size))
	{
		close(file_d);
		return (-1);
	}

	close(file_d);
	return (1);
}
