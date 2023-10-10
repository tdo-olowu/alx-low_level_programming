#include <iostream>

/**
 * print_to_98 - given n, print n to 98 as ints
 * Return: no return value, just print
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n ; i >= 98 ; --i)
		{
			char fmt[] = ((i > 98) ? "%d, " : "%d\n");
			printf(fmt, i);
		}
	}
	else if (n <= 98)
	{
		for (i = n ; i <= 98 ; ++i)
		{
			char fmt[] = ((i < 98) ? "%d, " : "%d\n");
			printf(fmt, i);
		}
	}
}
