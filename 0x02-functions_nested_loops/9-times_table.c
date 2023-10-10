#include "main.h"

/**
 * times_table - prints the 9 times table?
 * i indicates table rows, j for columns
 * Return: no return value
 */
void times_table(void)
{
	int r, c, prod, sep;

	for (r = 0 ; r < 10 ; ++r)
	{
		for (c = 0 ; c < 10 : ++c)
		{
			prod = r * c;
			sep = ((c < 9) ? ',' : '\n');
			if (prod < 10)
			{
				_putchar(' ');
				_putchar('0' + prod);
				_putchar(sep);
				if (c < 9)
					_putchar(' ');
			}
			else
			{
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
				_putchar(sep);
				if (c < 9)
					_putchar(' ');
			}
		}
	}
}
