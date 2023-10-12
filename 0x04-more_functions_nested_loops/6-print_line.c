#include "main.h"

/**
 * print_line - prints a vertical 'line' using underscore character
 * @n: how many units of line do you want?
 * Return: no return value
 */
void print_line(int n)
{
	if (n > 0)
	{
		char line = '_';
		int i;

		for (i = 0 ; i < n ; ++i)
		{
			_putchar(line);
		}
	}
	_putchar('\n');
}
