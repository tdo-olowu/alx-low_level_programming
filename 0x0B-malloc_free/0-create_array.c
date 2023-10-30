#include "main.h"

/**
 * create_array - creates an initialised array of chars
 * @size: how large should the array be?
 * @c: what should we initialise the array with?
 * Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int i;

	arr = malloc(size * sizeof(char));
	if (arr != NULL)
	{
		for (i = 0 ; i < size ; ++i)
			arr[i] = c;
	}

	if (size == 0)
		return (NULL);
	return (arr);
}
