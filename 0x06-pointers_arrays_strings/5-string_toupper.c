#include "main.h"

/**
 * string_toupper - converts 'a' to "A', etc.
 * @str: the array of characters
 * Return: pointer to the start of the array
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; ++i)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] += 'A' - 'a';
		}
	}
	return (str);
}
