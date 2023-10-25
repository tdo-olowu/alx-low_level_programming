#include "main.h"

/**
 * factorial - factorial is 1x2x...xn
 * @n: the argument
 * Return: the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
