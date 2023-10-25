#include "main.h"

/**
 * is_prime_number - checks if number is prime.
 * @n: the number to test
 * Return: boolean. 1 means n is prime, 0 means n is not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else if (n > 2 && (n % 2) == 0)
		return (0);
	else
		return (2);
}
