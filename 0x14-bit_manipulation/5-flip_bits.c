#include "main.h"

/**
 * flip_bits - how many bits are different?
 * @n: an integer
 * @m: another integer.
 * Return: number of different bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diffxor, ones_count;

	diffxor = (m ^ n);

	for (ones_count = 0 ; diffxor > 0 ; diffxor >>= 1)
		ones_count += (diffxor & 1);

	return (ones_count);
}
