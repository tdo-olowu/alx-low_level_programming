#include "main.h"

/**
 * print_binary - prints a number in binary.
 * @n: the number, in decimal.
 * lb2 version, with 2^i as mask.
 * Return: none.
 */
void print_binary(unsigned long int n)
{
	if ((n == 0) || (n == 1))
		_putchar('0' + (n & 1));
	else
	{
		print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
}
