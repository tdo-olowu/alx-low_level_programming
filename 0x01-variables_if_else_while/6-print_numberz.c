#include <stdio.h>
#define ZERO 48
#define NINE 57

/**
 * main - digits as characters.
 * Return: 0 for success.
 */
int main(void)
{
	int n;

	for (n = ZERO ; n <= NINE ; ++n)
		putchar(n);
	putchar('\n');

	return (0);
}
