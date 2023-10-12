#include "main.h"

/**
 * print_diagonal - using the escape slash \ we print what resembles a triangle
 * @n: the altitude of the triangle
 * Return: no return value.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int j;

		for (i = 0 ; i < n ; ++i)
		{
			for (j = 0 ; j < i ; ++j)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
