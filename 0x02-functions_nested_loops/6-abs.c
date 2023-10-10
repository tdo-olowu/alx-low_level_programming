#include "main.h"

/**
 * _abs - computes the absolute value of the integer
 * Return: the positive version of the integer
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else if (n == 0)
		return (0);
	else if (n > 0)
		return (n);
}
