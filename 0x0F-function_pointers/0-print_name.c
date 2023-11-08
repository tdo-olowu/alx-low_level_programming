#include "function_pointers.h"

/**
 * print_name - uses the given function to print a name
 * @name: a name to print
 * @f: a ptr to function expecting a string. f prints a name
 * Return: none.
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
		f(name);
}
