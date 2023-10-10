#include <stdio.h>

/**
 * print_to_98 - given n, print n to 98 as ints
 * @n: the stopping number. n will be printed too.
 * Return: no return value, just print
 */
void print_to_98(int n)
{
	int i;
	char fmt[] = "%d%c%c" ;
	char sep, pad;

	if (n > 98)
	{
		for (i = n ; i >= 98 ; --i)
		{
			sep = ((i > 98) ? ',' : '\0');
			pad = ((i > 98) ? ' ' : '\n');
			printf(fmt, i, sep, pad);
		}
	}
	else if (n <= 98)
	{
		for (i = n ; i <= 98 ; ++i)
		{
			sep = ((i < 98) ? ',' : '\0');
			pad = ((i < 98) ? ' ' : '\n');
			printf(fmt, i, sep, pad);
		}
	}
}
