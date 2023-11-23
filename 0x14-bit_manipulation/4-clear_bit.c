#include "main.h"

/**
 * clear_bit - set bit to 0 at given index.
 * @n: pointer to n?
 * @index: the index. L, L-1, ..., 0
 * Return: 1 if it worked, -1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int toggle_off;
	unsigned int i;

	if (index >= 8 * sizeof(unsigned long int))
		return (-1);

	if (n == NULL)
		return (-1);

	for (toggle_off = 1, i = 0 ; i < index ; ++i)
	{
		toggle_off <<= 1;
	}
	toggle_off = ~toggle_off;
	*n = *n & toggle_off;

	return (1);
}
