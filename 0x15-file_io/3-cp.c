#include "main.h"

#define TOPEN_FLAGS (O_WRONLY | O_CREAT | O_TRUNC)
#define TMODE_FLAGS (0664)
#define FERR STDERR_FILENO


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
		dprintf(FERR, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(FERR, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], TOPEN_FLAGS, TMODE_FLAGS);
	if (file_to < 0)
	{
		close(file_from);
		dprintf(FERR, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		bytes_read = read(file_from, buffer, sizeof(buffer));
		bytes_written = write(file_to, buffer, bytes_read);
		if ((bytes_written < 0) || (bytes_written != bytes_read))
		{
			dprintf(FERR, "Error: Can't write to %s\n", argv[2]);
			close(file_to);
			close(file_from);
			exit(99);
		}
	} while (bytes_read > 0);
	if (close(file_to) < 0)
	{
		dprintf(FERR, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	if (close(file_from) < 0)
	{
		dprintf(FERR, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	return (0);
}
