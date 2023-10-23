#include "main.h"

/**
 * print_chessboard - prints an 8x8 board to stdout
 * @a: a 2d array
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0 ; i < 8 ; ++i)
	{
		for (j = 0 ; j < 8 ; ++j)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
