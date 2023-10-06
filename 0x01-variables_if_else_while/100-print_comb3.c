#include <stdio.h>
#define ZERO 48
#define FIVE 53
#define NINE 57

/**
 * main - prints the smaller two-digit numbers as chars.
 * Return: 0 for success 1 for failure
 */
int main(void)
{
	int i, j;

	for (i = ZERO ; i <= FIVE ; ++i)
	{
		for (j = i + 1 ; j <= NINE ; ++j)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
