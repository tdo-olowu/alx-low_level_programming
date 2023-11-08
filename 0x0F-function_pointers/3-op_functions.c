#include "function_pointers.h"
#include "3-calc.h"

/**
 * op_add - adds two integers.
 * @a: a
 * @b: b
 * Return: the sum a + b
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}


/**
 * op_sub - subtracts two numbers.
 * @a: for apple
 * @b: for ball
 * Return: the difference of a, b. Not commutative.
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}


/**
 * op_mul - multiplies two numbers
 * @a: number.
 * @b: another number.
 * Return: a times b. Beware of overflow.
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}


/**
 * op_div - divides one number by another.
 * @a: divident
 * @b: divisor
 * Return: a/b in decimal. beware zero division.
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (0);
	return ((a) / (b));
}


/**
 * op_mod - computes the remainder upon division
 * @a: the divident
 * @b: the divisor
 * Return: what is rem of a / b upon Euclidean division?
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (0);
	return ((a) % (b));
}

