#include "main.h"

/**
 * _strcmp - compares two strings, reports type of disagreement if any.
 * @s1: the first string
 * @s2: the other string
 * Return: <0 means s1 is shorter, 0 means equal length, >0 means s1 is longer.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; (s1[i] != '\0') && (s1[i] - s2[i] == 0) ; ++i)
	{
	}
	if ((s1[i] == '\0') && (s2[i] == '\0'))
		return (0);
	else
		return (s1[i] - s2[i]);
}
