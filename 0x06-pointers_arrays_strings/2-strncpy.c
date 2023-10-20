#include "main.h"

/**
 * _strncpy - copies one string to another
 * @dest: the destination to copy to
 * @src: the source to copy from
 * @n: the maximum number of characters to copy
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	n = ((n <= 0) ? (-1 * n) : n);
	for (i = 0 ; (dest[i] != '\0') && (i < n) ; ++i)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
			break;
	}
	while (i < n)
	{
		dest[i] == '\0';
		++i;
	}
	return (dest);
}
