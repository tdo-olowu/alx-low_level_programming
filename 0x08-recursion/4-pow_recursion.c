#include "main.h"

/**
 * _pow_recursion - pow means x to the power of y
 * @x: the base
 * @y: the integer power
 * Return: the power x^y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
