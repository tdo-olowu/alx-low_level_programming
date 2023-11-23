#include "main.h"

/**
 * flip_bits - how many bits are different?
 * @n: an integer
 * @m: another integer.
 * Return: number of different bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int inv_diff, ones_count;

	inv_diff = ~(m ^ n);

	if (inv_diff == 0)
		return (1);

	for (ones_count = 0 ; inv_diff > 0 ; inv_diff >>= 1)
		ones_count += 1 - (inv_diff & 1);

	return (ones_count);
}
