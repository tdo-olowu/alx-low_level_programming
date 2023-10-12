#include "main.h"

/**
 * more_numbers - prints 1 to 14 ten times
 * Return: no return, no going back now.
 */
void more_numbers(void)
{
	int i, c, tens, units;

	for (i = 0 ; i < 10 ; ++i)
	{
		for (c = 0 ; c <= 14 ; ++c)
		{
			tens = (c / 10);
			units = (c % 10);
			if (tens > 0)
				_putchar('0' + tens);
			_putchar('0' + units);
		}
		_putchar('\n');
	}
}
