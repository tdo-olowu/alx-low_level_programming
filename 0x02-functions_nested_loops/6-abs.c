#include "main.h"

/**
 * _abs - computes the absolute value of the integer
 * @n: n is an integer
 * Return: the positive version of the integer
 */
int _abs(int n)
{
	int val;

	val = ((n < 0) ? (-1 * n) : n);
	return (val);
}
