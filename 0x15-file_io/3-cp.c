#include "main.h"

#define OTO_FLAGS (O_WRONLY | O_CREAT | O_TRUNC)
#define OTO_PERMS (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)
#define OFROM_FLAGS (O_RDONLY)
#define FEER FILENO_STDERR

/**
 * main - overwrites one file with another.
 * @argc: number of arguments
 * @argv: pointer to list of arguments.
 */
int main(argc, **argv)
{
	char *erruse = "Usage: cp file_from file_to\n";
	int file_to, file_from;
	char buffer[1024];

	if (argc - 1 != 2)
	{
		dprintf(FERR, "Usage: cp file_from file_to\n");
		exit(98);
	}

	file_from = open(argv[2], OFROM_FLAGS);
	if (file_from < 0)
	{
		dprintf(FERR
		write(FILENO_STDERR, argv[2], sizeof(argv[2]));
		exit(98);
	}
	file_to = open(argv[1], OTO_FLAGS, OTO_PERMS);
	if (file_to < 0)
	{
		write(FILENO_STDERR, argv[1], sizeof(argv[1]));
		exit(99);
	}
	d

}
