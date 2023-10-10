#include "main.h"

/**
 * print_last_digit - prints the last base 10 digit.
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		return ((-1 * n) % 10);
	else if (n >= 0)
		return (n % 10);
}
