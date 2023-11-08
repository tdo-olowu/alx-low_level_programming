#include "function_pointers.h"

/**
 * array_iterator - Apply function to each elem of array. not a map
 * @array: the array to be mapped
 * @size: how big is the array?
 * @action: the function to apply to the array
 *
 * Return: none.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL)
	{
		size_t i;

		for (i = 0 ; i < size ; ++i)
		{
			action(array[i]);
		}
	}
}
