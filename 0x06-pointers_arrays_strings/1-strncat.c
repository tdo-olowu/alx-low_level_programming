#include "main.h"

/**
 * _strncat - concatenates at most n bytes of src to dest
 * @dest: the head
 * @src: the tail
 * @n: the max number of bytes to catenate
 * Return: pointer to the head (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; ++i)
	{
	}
	for (j = 0 ; (j < n) && (str[j] != '\0') ; ++j)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
