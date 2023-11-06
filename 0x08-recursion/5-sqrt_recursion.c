#include "main.h"

/**
 * _sqrt_recursion - computes the square root of perfect squares recursively
 * @n: an integer. hope it's a perfect square!
 * Return: the square root or -1 for non perf squares.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_help(1, 1, n));
}
