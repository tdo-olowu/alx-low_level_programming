#include "main.h"

/**
 * print_binary - prints a number in binary.
 * @n: the number, in decimal.
 * lb2 version, with 2^i as mask.
 * Return: none.
 */
void print_binary(unsigned long int n)
{
	int len;
	unsigned long int temp, mask;

	if (n == 0)
		_putchar('0');
	else
	{
		mask = 1;
		temp = n;
		for (len = 0; temp > 0 ; ++len)
		{
			temp >>= 1;
			mask <<= 1;
		}
		mask >>= 1;
		for (temp = n ; mask > 0 ; mask >>= 1)
		{
			if ((temp & mask) != 0)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
