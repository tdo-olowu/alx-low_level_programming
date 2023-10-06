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

	for (n = ZERO ; n <= NINE ; ++n)
	{
		if (n == NINE)
			putchar(n);
		else
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
