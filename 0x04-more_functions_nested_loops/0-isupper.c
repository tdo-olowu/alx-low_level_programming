#include "main.h"

/**
 * _isupper - checks if the char is uppercase
 * @c: not this language, but the name of the argument.
 * Return: 1 means c is uppercase, 0 means else.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
