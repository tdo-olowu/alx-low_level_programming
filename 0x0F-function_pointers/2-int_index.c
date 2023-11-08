#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to search.
 * @size: how large the array is
 * @cmp: tests int for condition.
 * int_index returns the index of the first element...
 * ...for which the cmp function does not return 0.
 * Return: see above. Return -1 if size <= 0 or no matches found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0 ; i < size ; ++i)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
