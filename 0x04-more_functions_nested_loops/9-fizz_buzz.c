#include <stdio.h>

/**
 * main - fizz means multiple of 3, buzz is multiple of 5
 * Return: 0 for success
 */
int main(void)
{
	int n, sep;

	for (n = 1; n <= 100 ; ++n)
	{
		sep = ((n < 100) ? ' ' : '\n');
		if ((n % 15) == 0)
			printf("%s%c", "FizzBuzz", sep);
		else if ((n % 3) == 0)
			printf("%s%c", "Fizz", sep);
		else if ((n % 5) == 0)
			printf("%s%c", "Buzz", sep);
		else
			printf("%d%c", n, sep);
	}
}
