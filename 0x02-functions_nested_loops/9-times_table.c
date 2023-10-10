#include "main.h"

/**
 * times_table - prints the 9 times table?
 * i indicates table rows, j for columns
 * Return: no return value
 */
void times_table(void)
{
	int r, c, val, sep;

	for (r = 0; r < 10 ; ++r)
	{
		for (c = 0; c < 10 ; ++c)
		{
			sep = ((c < 9) ? ',' : '\0');
			pad = ((c < 9) ? ' ' : '\n');
			val = r * c;
			if (val == 0)
			{
				_putchar(ZERO + val);
				_putchar(sep);
				_putchar(pad);
			}
			else if (val < 10)
			{
				_putchar(' ');
				_putchar('0' + val);
				_putchar(sep);
				_putchar(pad);
			}
			else if (val >= 10)
			{
				_putchar(ZERO + (val / 10));
				_putchar(ZERO + (val % 10));
				_putchar(sep);
				_putchar(pad);
			}
		}
	}
}
