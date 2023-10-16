#include "main.h"

/**
 * swap_int - swaps the integers stored in a pair of variables.
 * @a: the first integer
 * @b: the other integer
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
