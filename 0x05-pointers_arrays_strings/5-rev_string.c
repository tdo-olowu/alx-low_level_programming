#include "main.h"

/**
 * rev_string - merely reverses a string
 * @s: the string in question
 * Return: no return value, only does a process
 */
void rev_string(char *s)
{
	int i, j, bnd, temp;

	for (j = 0 ; s[j] != '\0' ; ++j)
	{
	}
	if (j % 2 == 0)
		bnd = j / 2;
	else
		bnd = (j - 1) / 2;

	for (i = j - 1 ; i >= bnd ; --i)
	{
		temp = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = temp;
	}
}
