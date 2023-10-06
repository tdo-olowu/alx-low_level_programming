#include <stdio.h>

/**
 * main - prints digits 0 to 9.
 * Return: 0 means success 1 means failure.
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; ++n)
		printf("%d", n);
	putchar('\n');

	return (0);
}
