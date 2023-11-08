#include <stdio.h>
#include <stdlib.h>

/**
 * main - a utility for simply arithmetic on two integers
 * @argc: argument count
 * @argv: the list of arguments.
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	// no call op_thing directly.
	// use atoi to convert args to int. no loops allowed
	// 3 if statements maximum.
	// agv1 is int1 agv2 is op agv3 is int2
	int a, b, val;
	char op;

	if (argc != 4)
	{
		puts("Error\n");
		exit(98);
	}
	a = atoi(arg[1]);
	b = atoi(arg[3]);
	switch (op)
	{
		case ('+'):
			doop;
		case ('-'):
			doop;
		case ('*')
			doop;
		case ('/')
			doop;
		case ('%')
			doop;
		default
		{
			puts("Error\n");
			exit(99);
		}
	}
	if ((op == '/') || (op == '%') && (b == 0))
	{
		puts("Error\n");
		exit(100);
	}

	val = 0;
	printf("%d\n", val);
	return (0);
}
