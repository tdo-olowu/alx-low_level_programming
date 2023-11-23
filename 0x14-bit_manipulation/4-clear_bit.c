#include "main.h"

/**
 * clear_bit - set bit to 0 at given index.
 * @n: pointer to n?
 * @index: the index. L, L-1, ..., 0
 * Return: 1 if it worked, -1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, len, mask, *temp;

	temp = n;
	mask = 1;
	for (len = 0; *temp > 0 ; ++len)
	{
		*temp >>= 1;
		i = ((i == index) ? 0 : 1);
		mask = (mask << 1) + i;
	}
	mask >>= 1;
	if (len <= index)
		return (-1);

	*temp = (*n & mask);
	return (1);
}
