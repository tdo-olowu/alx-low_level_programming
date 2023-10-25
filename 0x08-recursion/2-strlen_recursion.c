#include "main.h"

/**
 * _strlen_recursion - prints the length of a string by recursive means
 * @s: the string to be measured.
 * Return: length of string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
