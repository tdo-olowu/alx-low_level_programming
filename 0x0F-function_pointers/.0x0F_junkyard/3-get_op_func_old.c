#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - a function which returns a function.
 * @s: operator, as a string
 * Wow, this syntax is an eyesore.
 * Imagine defining a function which returns a function that
 * points to a function
 * Return: a function...rather, a pointer to function's code.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {  {"+", op_add}, {"-", op_sub},
			{"*", op_mul}, {"/", op_div},
			{"%", op_mod}, {NULL, NULL} };
    	int i;

	i = 0;
	while (i < 5)
	{
		if ((s != NULL) && (s == ops[i][0]))
			return (ops[i][1]);
	}
	return (NULL);
}

