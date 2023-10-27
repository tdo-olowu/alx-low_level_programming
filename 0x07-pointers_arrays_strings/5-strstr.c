#include "main.h"

/**
 * _strstr - find str in str
 * @haystack: what to check
 * @needle: what to search for
 * Return: Pointer to start of needle.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, n, h;

	for (n = 0; needle[n] != '\0' ; ++n)
		;
	for (h = 0; haystack[n] != '\0' ; ++h)
		;

	for (i = 0 ; i <= h - n ; ++i)
	{
		for (j = 0 ; (j < n) && (needle[j] == haystack[i + j]) ; ++j)
			;
		if (j == n)
			break;
	}
	return (&haystack[i]);
}