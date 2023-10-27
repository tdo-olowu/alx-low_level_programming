#include <stdio.h>

/**
 * main - prints how many args.
 * @argc: how many args
 * @argv: stores the args in question.
 * Return: 0 for success, 1 for failure.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
