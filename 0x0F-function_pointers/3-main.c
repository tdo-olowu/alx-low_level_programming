#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "3-calc.h"

/**
 * main - a utility for simply arithmetic on two integers
 * @argc: argument count
 * @argv: the list of arguments.
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int a, b, val;
	int (*opfn)(int, int);
	char *op;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);
	if (((*op == '/') || (*op == '%')) && (b == 0))
	{
		puts("Error");
		exit(100);
	}

	opfn = get_op_func(op);
	if ((opfn == NULL) || !(isdigit(argv[1])) || !(isdigit(argv[3])))
	{
		puts("Error");
		exit(99);
	}
	val = opfn(a, b);
	printf("%d\n", val);

	return (0);
}
