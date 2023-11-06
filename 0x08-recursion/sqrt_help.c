#include "main.h"

int sqrt_help(int k, int total, int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n < total)
		return (-1);
	else if (n == total)
		return (k);
	else
		return (sqrt_help(k + 1, total + (2*k + 1), n));
}
