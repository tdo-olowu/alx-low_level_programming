#include "main.h"

/**
 * string_nconcat - welds all of s1 to all or part of s2
 * @s1: the head
 * @s2: the tail.
 * @n: how much of s2? If n >= s2, concat all of s2
 *
 * NULL strings are treated as empty strings.
 * Return: pointer to newly allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x1, x2, k;
	char *cat;

	for (x1 = 0 ; (s1 != NULL) && (s1[x1] != '\0') ; ++x1)
		;
	for (x2 = 0 ; (s2 != NULL) && (s2[x2] != '\0') ; ++x2)
		;

	cat = malloc((x1 + x2) * sizeof(char) + 1);
	if (cat == NULL)
	{
		return (NULL);
	}
	for (k = 0 ; k < x1 ; ++k)
		cat[k] = s1[k];
	for (k = 0 ; (k < x2) && (k <= n) ; ++k)
		cat[k + x1] = s2[k];
	cat[k + x1] = '\0';

	return (cat);
}

