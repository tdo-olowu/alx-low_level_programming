#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in array by jumping
 * array is assumed to be sorted in ascending order.
 *
 * @array: the pointer to head of the array
 * @size: number of items in the array
 * @value: the value to search for
 * Return: index of value if found, -1 if not.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, l, jump;
	char *fmt = "Value checked array[%lu] = [%d]\n";
	char *fmtr = "Values found between indexes [%lu] and [%lu]\n";

	if (array == NULL)
		return (-1);

	i = 0;
	jump = sqrt(size);
	while (i < size)
	{
		printf(fmt, i, array[i]);
		if (array[i] == value)
			return (i);
		if (array[i] > value)
		{
			printf(fmtr, i - jump, i);
			break;
		}
		i += jump;
	}
	i -= jump;
	/* now perform a linear search */
	for (l = i ; (l < size) && (l <= i + jump) ; ++l)
	{
		printf(fmt, l, array[i]);
		if (array[l] == value)
			return (l);
	}
	return (-1);
}
