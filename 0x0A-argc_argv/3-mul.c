#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers.
 * @argc: how many args
 * @argv: stores the args in question.
 * Return: 0 for success, 1 for failure.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
