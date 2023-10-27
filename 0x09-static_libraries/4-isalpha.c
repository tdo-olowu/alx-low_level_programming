#include "main.h"

/**
 * _isalpha - checks if char is alphabetic
 * @c: c is a char, stored as int.
 * Return: 1 if character is alpha, else 0
 */
int _isalpha(int c)
{
	if (('a' <= c) && (c <= 'z'))
		return (1);
	else if (('A' <= c) && (c <= 'Z'))
		return (1);
	else
		return (0);
}
