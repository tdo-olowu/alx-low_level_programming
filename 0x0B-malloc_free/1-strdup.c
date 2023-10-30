#include "main.h"

/**
 * _strdup - not shaken up. string duplicate i.e. copy
 * @str: the string to copy
 * Return: pointer to duplicate, or NULL
 */
char *_strdup(char *str)
{
	int count;

	for (count = 0 ; str[count] != '\0' ; ++count)
		;
	if (count > 0)
	{
		char *cpy;

		cpy = malloc(count * sizeof(char));
		if (cpy != NULL)
		{
			for ( ; count >= 0 ; --count)
				cpy[count] = str[count];
		}
		return (cpy);
	}
	return (NULL);
}
