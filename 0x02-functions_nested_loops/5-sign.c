#include "main.h"

/**
 * print_sign - tells you if a number is negative, zero or positive.
 * Return: 1 for positive, 0 for zero, -1 for negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_printf('+');
		return (1);
	}
	else if (n == 0)
	{
		_printf('0');
		return (0);
	}
	else if (n < 0)
	{
		_printf('-');
		return (-1);
	}
}
