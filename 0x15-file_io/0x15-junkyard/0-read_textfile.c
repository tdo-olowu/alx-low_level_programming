#include "main.h"

/**
 * read_textfile - read text file and print to stdout
 * @filename: ptr to filename
 * @letters: no of bytes to read
 * Return: no of bytes read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t bytes_written, bytes_read;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d < 0)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	bytes_read = read(file_d, buffer, letters);
	if (bytes_read < 0)
	{
		free(buffer);
		close(file_d);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if ((bytes_written < 0) || (bytes_written != bytes_read))
	{
		free(buffer);
		close(file_d);
		return (0);
	}

	free(buffer);
	close(file_d);
	return (bytes_written);
}
