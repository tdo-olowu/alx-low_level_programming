#include "main.h"

/**
 * print_last_digit - prints the last base 10 digit.
 * @n: n is an integer in base 10
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int rem ;

	rem = ((n < 0) ? (-1 * n) : n);
	_putchar(rem);
	return (n % 10);
}
