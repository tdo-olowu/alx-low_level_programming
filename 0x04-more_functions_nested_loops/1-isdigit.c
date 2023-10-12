#include "main.h"

/**
 * _isdigit - checks if the char is a digit
 * @c: the name of the char argument.
 * Return: 1 means c is digit, 0 means it isn't.
 */
int _isdigit(int c)
{
	return ((c >= '0') || (c <= '9'));
}
