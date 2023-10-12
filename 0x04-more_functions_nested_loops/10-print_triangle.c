#include "main.h"

/**
 * print_triangle - prints a weird-looking triangle
 * @size: the triangle's height in no of lines
 * Return: no return, just print.
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0 ; i < size ; ++i)
		{
			for (j = 0 ; j < i ; ++j)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
