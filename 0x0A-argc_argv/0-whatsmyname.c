#include <stdio.h>

/**
 * main - my name is?
 * @argc: how many arguments given to program?
 * @argv: an array storing the arguments given
 * Return: 0 for success, 1 for failure.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
