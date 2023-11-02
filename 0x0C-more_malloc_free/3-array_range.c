#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum
 * @max: the maximum
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *ask;

	if (min > max)
		return (NULL);
	ask = malloc((max - min + 1 + 1) * sizeof(int));
	if (ask == NULL)
		return (NULL);
	for (i = 0 ; i <= max - min ; ++i)
		ask[i] = min + i;

	return (ask);
}
