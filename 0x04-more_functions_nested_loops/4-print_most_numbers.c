#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 squished together except 2, 4
 * Return: nothing.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; ++i)
	{
		if ((i != 2) && (i != 4))
			_putchar('0' + i);
	}
	_putchar('\n');
}
