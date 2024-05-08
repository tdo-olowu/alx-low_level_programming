#include "search_algos.h"

/**
 * print_array_bsearch - a helper function to show bin search
 * @array: subarray to print
 * @lo: the lower bound
 * @hi: the upper bound.
 * Return: none
 */
void print_array_bsearch(int *array, size_t lo, size_t hi)
{
	size_t i;

	printf("Searching in array: ");
	for (i = lo ; i < hi ; ++i)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}


/**
 * advanced_binary - searches list for value using binary search
 * it is assumed that the array is sorted in ascending order.
 * and the value appears only once in the array
 *
 * @array: pointer to the head of the array
 * @size: the number of elements in the array
 * @value: the value to search for.
 * Return: index of the value if it's there, -1 if not
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t lo = 0, hi = size - 1;
	size_t mid = 0;

	if (array == NULL)
		return (-1);

	while (hi >= lo)
	{
		print_array_bsearch(array, lo, hi);
		mid = (hi + lo) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			lo = mid + 1;
		else if (array[mid] > value)
			hi = mid - 1;
	}

	return (-1);
}
