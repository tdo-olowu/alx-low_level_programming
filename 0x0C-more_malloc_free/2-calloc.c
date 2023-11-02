#include "main.h"

/**
 * _calloc - allocates memory, but initialises it to 0
 * @nmemb: how many elements? n members.
 * @size: how large is each element in bytes?
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ask;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ask = malloc(nmemb * size);
	if (ask == NULL)
		return (NULL);

	for (i = 0 ; i < nmemb ; ++i)
		ask[i] = 0;

	return (ask);
}
