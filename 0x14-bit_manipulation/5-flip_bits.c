#include "main.h"

/**
 * flip_bits - how many bits are different?
 * @n: an integer
 * @m: another integer.
 * Return: number of different bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, zero_count;

	if ((m == 0) && (n == 1))
		return (1);
	else if ((m == 1) && (n == 0))
		return (1);

	diff = m ^ n;
	for (zero_count = 0 ; diff > 0 ; diff >>=1)
	{
		zero_count += 1 - (diff & 1);
	}

	return (zero_count);
}
