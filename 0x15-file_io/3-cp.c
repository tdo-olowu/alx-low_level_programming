#include "main.h"

#define TOPEN_FLAGS (O_WRONLY | O_CREAT | O_TRUNC)
#define TMODE_FLAGS (0664)
#define FERR FILENO_STDERR

/**
 * main - overwrites one file with another.
 * @argc: number of arguments
 * @argv: pointer to list of arguments.
 * Return: exit codes.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc - 1 != 2)
	{
		exit(1);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], TOPEN_FLAGS, TMODE_FLAGS);

	do {
		bytes_read = read(file_from, buffer, sizeof(buffer));
		bytes_written = write(file_to, buffer, bytes_read);
		if ((bytes_written < 0) || (bytes_written != bytes_read))
		{
			close(file_to);
			close(file_from);
			return (-1);
		}
	} while (bytes_read > 0);

	if ((close(file_to) < 0) || (close(file_from) < 0))
	{
		return (-1);
	}

	return (1);
}	
