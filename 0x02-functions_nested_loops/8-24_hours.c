#include "main.h"

/**
 * jack_bauer - prints the entire range of a digital clock
 * Return: no return value, just stout
 */
void jack_bauer(void)
{
	int hrs;
	int mins;
	int H, h, M, m;

	for (hrs = 0 ; hrs < 24 ; ++hrs)
	{
		for (mins = 0 ; mins < 60 ; ++mins)
		{
			H = hrs / 10;
			h = hrs % 10;
			M = mins / 10;
			m = mins % 10;
			_putchar('0' + H);
			_putchar('0' + h);
			_putchar(':');
			_putchar('0' + M);
			_putchar('0' + m);
			_putchar('\n');
		}
	}
}
