#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of each diag of a square matrix
 * @a: the matrix
 * @size: the number of rows (columns)
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, j, pri_sum, sec_sum;

	pri_sum = 0;
	sec_sum = 0;
	for (i = 0 ; i < size ; ++i)
	{
		for (j = 0 ; j < size ; ++j)
		{
			if (i == j)
				pri_sum += a[i][j];
			else if (i + j == size - 1)
				sec_sum += a[i][j];
			else
				continue;
		}
	}
	printf("%d, %d\n", pri_sum, sec_sum);
}
