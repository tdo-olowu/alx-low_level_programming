#include "main.h"

/**
 * print_last_digit - prints the last base 10 digit.
 * @n: n is an integer in base 10
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int rem = (n % 10);

	rem = ((rem < 0) ? (-1 * rem) : rem);
	_putchar('0' + rem);
	return rem;
}
