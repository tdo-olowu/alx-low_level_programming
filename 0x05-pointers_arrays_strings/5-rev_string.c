#include "main.h"

/**
 * rev_string - merely reverses a string
 * @s: the string in question
 * Return: no return value, only does a process
 */
void rev_string(char *s)
{
	int i, j, temp;

	for (j = 0 ; s[j] != '\0' ; ++j)
	{
	}
	for (i = 0 ; i <= j / 2 ; ++i)
	{
		temp = s[j - i - 1];
		s[j - i - 1] = s[i];
		s[i] = temp;
	}
}
