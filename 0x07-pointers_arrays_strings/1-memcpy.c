#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: where to copy to
 * @src: where to copy from
 * @n: how much to copy
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0 ; i < n ; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
