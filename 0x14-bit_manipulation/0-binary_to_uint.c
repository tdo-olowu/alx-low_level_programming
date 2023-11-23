#include "main.h"

/**
 * binary_to_uint - converts bitstring to uint.
 * @b: the bit string (we hope)
 * Return: decimal value of bit string.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i;
	int bit;

	if (b == NULL)
		return (0);
	for (i = 0 ; b[i] != '\0' ; ++i)
	{
		if ((b[i] != '0') && (b[i] != '1'))
		{
			value = 0;
			break;
		}
		bit = (unsigned int)(b[i] - '0');
		if (i == 0)
			value = bit;
		else
			value = (value << 1) + bit;
	}

	return (value);
}
