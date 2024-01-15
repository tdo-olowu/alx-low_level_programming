#include "main.h"

/**
 * _puts - a cheap imitation of puts
 * @str: the string, stored as an array
 * Return: no return value, just print to stout
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; ++i)
		_putchar(str[i]);
	_putchar('\n');
}
