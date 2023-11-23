#include "main.h"

/**
 * print_binary - prints a number in binary.
 * @n: the number, in decimal.
 * Return: none.
 */
void print_binary(unsigned long int n)
{
	int len;
	unsigned long int temp;
	unsigned long int mask;

	for (len = 1, temp = n ; temp > 0 ; ++len)
		temp = temp >> 1;
	for (mask = 1; len > 1 ; --len)
		mask *= 2;

	temp = n;
	for (temp = n ; mask > 0 ; mask = mask >> 1)
	{
		switch (temp & mask)
		{
			case (0):
				_putchar('0');
				break;
			default:
				_putchar('1');
				break;
		}
		temp = temp >> 1;
	}
	_putchar('\n');
}
