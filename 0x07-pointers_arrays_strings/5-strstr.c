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

	for (n = 0; needle[n] != '\0' ; ++n);
	for (h = 0; haystack[n] != '\0' ; ++h);

	if (n <= h)
	{
		for (i = 0 ; i <= h - n ; ++i)
		{
			for (j = 0 ; j < n ; ++j)
			{
				if (needle[j] != haystack[i + j])
					break;
			}
			if (j == n)
				return (&haystack[i]);
		}
	}
	else
		return (NULL);
}
