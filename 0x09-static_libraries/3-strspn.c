#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: the string to be searched
 * @accept: the character set we'll use to search
 * Return: longest streak of matches from the left end of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, n;

	n = 0;
	for (i = 0 ; s[i] != '\0' ; ++i)
	{
		for (j = 0 ; accept[j] != '\0' ; ++j)
		{
			if (s[i] == accept[j])
			{
				++n;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (n);
}
