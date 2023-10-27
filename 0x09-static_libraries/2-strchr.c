#include "main.h"

/**
 * _strchr - points to the first occurence of the character c in the string s
 * @s: the string to be searched
 * @c: the character set
 * Return: pointer to location of char.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; ++i)
	{
		if (s[i] == c)
			return (&s[i]);
		else
		{
		}
	}
	return ('\0');
}
