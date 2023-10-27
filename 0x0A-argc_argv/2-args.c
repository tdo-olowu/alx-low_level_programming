#include <stdio.h>

/**
 * main - prints all given args
 * @argc: how many args
 * @argv: stores the args in question.
 * Return: 0 for success, 1 for failure.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; ++i)
		printf("%s\n", argv[i]);

	return (0);
}
