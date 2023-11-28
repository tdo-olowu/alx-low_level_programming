#include "main.h"

#define OTO_FLAGS (O_WRONLY | O_CREAT | O_TRUNC)
#define OTO_PERMS (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)
#define OFROM_FLAGS (O_RDONLY)
#define FEER FILENO_STDERR

/**
 * main - overwrites one file with another.
 * @argc: number of arguments
 * @argv: pointer to list of arguments.
 * Return: exit codes.
 */
int main(argc, *argv[])
{
	int file_to, file_from;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc - 1 != 2)
	{
		dprintf(FERR, "Usage: cp file_from file_to\n");
		exit(98);
	}

	file_from = open(argv[2], OFROM_FLAGS);
	if (file_from < 0)
	{
		dprintf(FERR, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	file_to = open(argv[1], OTO_FLAGS, OTO_PERMS);
	if (file_to < 0)
	{
		dprintf(FERR, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}

	while ((bytes_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		if (write(file_to, buffer, bytes_read) < 0)
		{
			dprintf(FERR, "Error: Can't write to %s\n", argv[1]);
			close(file_to);
			close(file_from);
			exit(99);
		}
	}
	close(file_to);
	close(file_from);
}
