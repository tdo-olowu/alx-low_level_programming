#include "main.h"

/**
 * _memset - fills the first n bytes of an array with the same character
 * @s: the array (region of memory)
 * @b: the character (byte) that fills
 * @n: how many?
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; ++i)
		s[i] = b;
	return (s);
}
