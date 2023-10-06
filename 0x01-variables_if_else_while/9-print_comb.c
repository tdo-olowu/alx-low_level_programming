#include <stdio.h>
#define ZERO 48
#define NINE 57

/**
 * main - prints 0 to 9 in a weird way
 * Return: 0 for success
 */
int main(void)
{
	int n = ZERO;
	int stop;
	int sep;

	for (n = ZERO ; n <= NINE ; ++n)
	{
		stop = ((n < NINE) ? ' ' : '\n');
		putchar(n);
		if (n < NINE)
			putchar(',');
		putchar(stop);
	}

	return (0);
}
