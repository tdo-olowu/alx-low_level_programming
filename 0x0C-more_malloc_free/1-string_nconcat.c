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
	unsigned int c1, c2, k;
	char *cat;

	for (c1 = 0 ; (s1 != NULL) && (s1[c1] != '\0') ; ++c1)
		;
	for (c2 = 0 ; (s2 != NULL) && (s2[c2] != '\0') ; ++c2)
		;

	cat = malloc(((c1 + c2) * sizeof(char)) + 1);
	if (cat == NULL)
		return (NULL);

	for (k = 0 ; k < c1 ; ++k)
		cat[k] = s1[k];

	for (k = 0 ; (k < n) && (k < c2) ; ++k)
		cat[k + c1] = s2[k];

	cat[k + c1] = '\0';

	return (cat);
}

