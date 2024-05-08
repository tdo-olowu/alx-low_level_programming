#include "search_algos.h"

/**
 * binary_search - searches list for value using binary search
 * it is assumed that the array is sorted in ascending order.
 * and the value appears only once in the array
 *
 * @array: pointer to the head of the array
 * @size: the number of elements in the array
 * @value: the value to search for.
 * Return: index of the value if it's there, -1 if not
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = size - 1;
	size_t mid = 0;

	if (array == NULL)
		return (-1);

	while (hi - lo + 1 > 0)
	{
		mid = (hi - lo) / 2;
		if (array[mid] < value)
			hi = mid;
		else if (array[mid] > value)
			lo = mid;
		else
			return (mid);
	}

	return (-1);
}
