#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - checks if the number is positive or not
 * Return: 0 means the program is successful
 */
int main(void)
{
	int n;
	char fmt[] = "%d %s\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf(fmt, n, "is positive");
	else if (n == 0)
		printf(fmt, n, "is zero");
	else if (n < 0)
		printf(fmt, n, "is negative");

	return (0);
}
