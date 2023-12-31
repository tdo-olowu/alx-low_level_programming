#include "main.h"

/**
 * set_bit - sets bit to 1
 * @n: a pointer to long int?
 * @index: index, counts from right to left. i0 is 0.
 * Return: 1 if it worked, -1 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int toggle_on;
	unsigned int i;

	if (index >= 8 * sizeof(unsigned long int))
		return (-1);

	if (n == NULL)
		return (-1);

	for (toggle_on = 1, i = 0 ; i < index ; ++i)
		toggle_on <<= 1;
	*n = *n | toggle_on;
	return (1);
}
