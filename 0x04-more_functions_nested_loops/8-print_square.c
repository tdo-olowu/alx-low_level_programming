#include "main.h"

/**
 * print_square - prints a so-called square
 * @size: the dimension of the "square"
 * Return: nah.
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 0 ; i < size ; ++i)
		{
			for (j = 0 ; j < size ; ++j)
			{
				_putchar('#')
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}