#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array in question.
 * @n: how many items in the array? be honest!
 * Return: no return value.
 */
void reverse_array(int *a, int n)
{
	int i, temp, mid;

	if (n % 2 == 0)
		mid = n / 2;
	else
		mid = (n - 1) / 2;

	for (i = 0 ; i < mid ; ++i)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
