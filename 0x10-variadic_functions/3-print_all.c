#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print all given args
 * @format: the format of the arguments i.e. types
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *fmt = format;

	while (*fmt)
	{
		if (*fmt == c)
		++fmt;
	}
	
	if (n > 0)
	{
		va_start(args, n);
		for (i = 0 ; i < n - 1 ; ++i)
		{
			/* strcpy(look, va_arg(args, char*)); */
			look = va_arg(args, char*);
			if (look == NULL)
				printf("(nil)");
			else
				printf("%s", look);
			if (separator != NULL)
				printf("%s", separator);
		}
		/* strcpy(look, va_arg(args, char*)); */
		look = va_arg(args, char*);
		if (look == NULL)
			printf("(nil)");
		else
			printf("%s", look);
		putchar('\n');
		va_end(args);
	}
}
