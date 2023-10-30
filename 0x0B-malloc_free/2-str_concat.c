#include "main.h"

/**
 * str_concat - creates new string that is the concat of two strings
 * @s1: the head
 * @s2: the tail
 * Return: pointer to the new string.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *cat;

	for (i = 0 ; s1[i] != '\0' ; ++i)
		;
	for (j = 0 ; s2[j] != '\0' ; ++j)
		;

	if (s1 == NULL)
		i = 0;
	if (s2 == NULL)
		j = 0;

	cat = malloc((i + j + 1) * sizeof(char));
	if (cat != NULL)
	{
		for (k = 0 ; k < i ; ++k)
			cat[k] = s1[k];
		for (k = 0 ; k < j ; ++k)
			cat[k + i] = s2[k];
		cat[i + j] = '\0';
		return (cat);
	}
	return (NULL);
}
