#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <strings.h>

/**
 * print_strings - print first n strings given
 * @separator: padding for strings
 * @n: the number of strings to print
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int *look;
	va_list args;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0 ; i < n - 1 ; ++i)
		{
			strcpy(look, va_arg(args, char*));
			if (look == NULL)
				printf("(nil)");
			else
				printf("%s", look);
			if (separator != NULL)
				printf("%s", separator);
		}
		strcpy(look, va_arg(args, char*));
		if (look == NULL)
			printf("(nil)");
		else
			printf("%s", look);
		putchar('\n');
		va_end(args);
	}
}
