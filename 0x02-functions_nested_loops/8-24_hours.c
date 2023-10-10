#include "main.h"
#define ZERO 48
#define NINE 57

/**
 * jack_bauer - prints the entire range of a digital clock
 * Return: no return value, just stout
 */
void jack_bauer(void)
{
	enum numbers
	{
		ZERO = 48,
		ONE, TWO, THREE,
		FOUR, FIVE, SIX,
		SEVEN, EIGHT, NINE
	}

	int H, h, M, m;

	for (H = ZERO ; H <= (ZERO + 2) ; ++H)
	{
		for (h = ZERO ; h <= (ZERO + 9) ; ++h)
		{
			for (M = ZERO ; M <= (ZERO + 6) ; ++M)
			{
				for (m = ZERO ; m <= (ZERO + 9) ; ++m)
				{
					if ((H == 2) && (h > 3))
						continue
					else
					{
						_putchar(H);
						_putchar(h);
						_putchar(':');
						_putchar(M);
						_putchar(m);
						_putchar('\n');
					}
				}
			}
		}
	}
