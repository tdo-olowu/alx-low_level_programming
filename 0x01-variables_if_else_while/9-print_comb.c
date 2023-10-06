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
		sep = ((n < NINE) ? ',' : '\0');
		putchar(n);
		putchar(sep);
		putchar(stop);
	}

	return (0);
}
