#include "main.h"

/**
 * get_bit - gets the bit at posittion ind
 * @n: the bitfield, as a number
 * @index: the index, >= 0
 * Return: the bit at ind, or -1 if failure.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_seek;
	unsigned int i;

	if ((n == 0) && (index == 0))
		return (0);
	if ((n > 0) && ((n >> index) > 0))
	{
		for (bit_seek = 1, i = 0 ; i < index ; ++i)
			bit_seek <<= 1;
		if ((bit_seek & n) != 0)
			return (1);
		return (0);
	}

	return (-1);
}
