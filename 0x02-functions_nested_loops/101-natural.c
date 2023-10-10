#include <stdio.h>
#define SUP 1024

/**
 * main - adds up multiples of 3 or 5 iteratively
 * Return: 0 means success
 */
int main(void)
{
	int i, acc, exs;

	acc = 0;
	exs = 0;
	for (i = 3 ; i < SUP ; ++i)
	{
		if ((i % 3) == 0)
			acc += i;
		if ((i % 5) == 0)
			acc += i;
		if ((i % 15) == 0)
			exs += i;
	}

	acc = acc - exs;
	printf("%d\n", acc);

	return (0);
}
