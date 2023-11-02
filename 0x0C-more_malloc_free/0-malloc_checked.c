#include "main.h"

/**
 * malloc_checked - allocates memory, but exits properly
 * @b: how many bytes to allocate
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ask;

	ask = malloc(b);
	if (ask != NULL)
		return (ask);
	exit(98);
}
