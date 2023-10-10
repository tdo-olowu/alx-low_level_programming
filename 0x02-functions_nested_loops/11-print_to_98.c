#include <stdio.h>

/**
 * print_to_98 - given n, print n to 98 as ints
 * @n: the stopping number. n will be printed too.
 * Return: no return value, just print
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n ; i >= 98 ; --i)
		{
			if (i > 98)
				printf("%d%c ", i, ',');
			else
				printf("%d\n", i);
		}
	}
	else if (n <= 98)
	{
		for (i = n ; i <= 98 ; ++i)
		{
			if (i < 98)
				printf("%d%c ", i, ',');
			else
				printf("%d\n", i);
		}
	}
}
