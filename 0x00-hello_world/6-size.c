#include <stdio.h>

/**
 * main - Betty, leave me alone coding isn't easy.
 * Return: Betty, write your own code
 */
int main(void)
{
	char fmt[] = "%s%d%s\n";

	printf(fmt, "Size of a char: ", sizeof(char), " byte(s)");
	printf(fmt, "Size of an int: ", sizeof(int), " bytes(s)");
	printf(fmt, "Size of a long int: ", sizeof(long int), " byte(s)");
	printf(fmt, "Size of a long long int: ", sizeof(long long int), " byte(s)");
	printf(fmt, "Size of a float: ", sizeof(float), " byte(s)");

	return (0);
}
