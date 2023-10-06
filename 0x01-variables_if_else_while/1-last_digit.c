#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - prints the last digit of n
 * Return: 0 means success 1 means failure.
 */
int main(void)
{
	int n;
	char pref[] = "Last digit of";
	char fmt[] = "%s %d %s %d %s\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf(fmt, pref, n, "is", n % 10, "and is greater than 5");
	else if (n % 10 == 0)
		printf(fmt, pref, n, "is", n % 10, "and is 0");
	else if (n % 10 < 6)
		printf(fmt, pref, n, "is", n % 10, "and is less than 6 and not 0");

	return (0);
}
