#include "main.h"

/**
 * times_table - prints the 9 times table?
 * @n: int between 0 and 15
 * Return: no return value
 */
void print_times_table(int n)
{
	if ((n >= 0) && (n <= 15))
	{
		int r, c, prod, sep;

		for (r = 0 ; r <= n ; ++r)
		{
			for (c = 0 ; c <= n ; ++c)
			{
				prod = r * c;
				sep = ((c < n) ? ',' : '\n');
				if (prod < 10)
				{
					if (c > 0)
						_putchar(' ');
					_putchar('0' + prod);
					_putchar(sep);
					if (c < n)
						_putchar(' ');
				}
				else if ((prod >= 10) && (prod < 100))
				{
					if (c > 0)
						_putchar(' ');
					_putchar('0' + (prod / 10));
					_putchar('0' + (prod % 10));
					_putchar(sep);
					if (c < n)
						_putchar(' ');
				}
				else
				{
					_putchar('0' + (prod / 100));
					_putchar('0' + ((prod % 100) / 10));
					_putchar('0' + (prod % 10));
					_putchar(sep);
					if (c < 9)
						_putchar(' ');
				}
			}
		}
	}
}
