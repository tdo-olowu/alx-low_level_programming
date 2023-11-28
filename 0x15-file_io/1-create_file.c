#include "main.h"

#define OPEN_FLAGS (O_WRONLY | O_CREAT | O_TRUNC)
#define USR_FLAGS (S_IRUSR | S_IWUSR)

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
	char *buffer;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, OPEN_FLAGS, USR_FLAGS);
	if (file_d < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(file_d);
		return (1);
	}

	size = sizeof(text_content);
	buffer = malloc(size);
	if (buffer == NULL)
		return (-1);
	bytes_written = write(file_d, buffer, size);
	if ((bytes_written < 0) || (bytes_written < size + 1))
	{
		close(file_d);
		free(buffer);
		return (-1);
	}

	return (1);
}
