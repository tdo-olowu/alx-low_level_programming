#include "main.h"

/**
 * print_array - print the first n items of an integer array
 * @a: the array in question
 * @n: the cardinal (i.e. how many) number of items to print
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; a[i] != '\0' ; ++i)
	{
	}
	if ((i >= n) && (n > 0))
	{
		for (i = 0 ; i < n - 1 ; ++i)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[i]);
	}
	else
	{
		putchar('\n');
	}
}
