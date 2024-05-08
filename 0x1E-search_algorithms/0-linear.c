#include "search_algos.h"


/**
 * linear_search - searches for a value in array
 * using linear search algorithm
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the first index where value is located, or -1 if error
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	char *fmt = "Value checked array[%lu] = [%d]\n";

	if (array == NULL)
		return (-1);

	for (i = 0 ; i < size ; ++i)
	{
		printf(fmt, i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
