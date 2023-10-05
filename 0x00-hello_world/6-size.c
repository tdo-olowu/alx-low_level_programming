#include <stdio.h>
#define BY "byte(s)"

/**
 * main - Betty, leave me alone coding isn't easy.
 * Return: Betty, write your own code
 */
int main(void)
{
	char fmt[] = "%s %d %s\n";

	printf(fmt, "Size of a char:", sizeof(char), BY);
	printf(fmt, "Size of an int:", sizeof(int), BY);
	printf(fmt, "Size of a long int:", sizeof(long int), BY);
	printf(fmt, "Size of a long long int:", sizeof(long long int), BY);
	printf(fmt, "Size of a float:", sizeof(float), BY);

	return (0);
}
