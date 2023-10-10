#include "main.h"
#define ZERO 48

/**
 * times_table - prints the 9 times table?
 * i indicates table rows, j for columns
 * Return: no return value
 */
void times_table(void)
{
	int i, j, val, sep, pad;

	for (i = 0; i < 10 ; ++i)
	{
		for (j = 0; j < 10 ; ++j)
		{
			sep = ((j < 9) ? ',' : '\0');
			pad = ((j < 9) ? ' ' : '\n');
			val = i * j;
			if (val	< 10)
			{
				_putchar(ZERO + val);
				_putchar(sep);
				_putchar(pad);
			}
			else if (val >= 10)
			{
				_putchar(ZERO + i);
				_putchar(ZERO + j);
				_putchar(sep);
				_putchar(pad);
			}
		}
	}
}
